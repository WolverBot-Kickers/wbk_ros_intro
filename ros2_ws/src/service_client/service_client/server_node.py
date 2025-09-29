from interfaces.srv import Ticket
from interfaces.msg import ConcertInfo
from interfaces.action import TicketSale
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse

class SellTicketService(Node):

    def __init__(self):
        super().__init__('SellTicketService')

        # init concert ticket info
        self.concert_count = 5
        self.concert_names = ['coachella',
                                'lollapalooza',
                                'glastonbury',
                                'rock in rio',
                                'isle of wight']
        self.musn_names = ['adele',
                            'bts',
                            'coldplay',
                            'taylor swift',
                            'ed sheeran']
        self.concert_dates = ['2024-04-12',
                            '2024-06-20',
                            '2024-07-26',
                            '2024-09-02',
                            '2024-10-10']
        self.prices = [300, 250, 400, 350, 450]
        self.remng_durations = [30, 45, 25, 50, 20]
        self.remg_ticket = [100, 150, 80, 200, 60]
        self.sale_count = [0] * self.concert_count

        # create action server
        self.action =  ActionServer(self,
                                    TicketSale,
                                    'start_selling',
                                    execute_callback=self.execute_callback,
                                    goal_callback=self.goal_callback,
                                    cancel_callback=self.cancel_callback)

        # create ticket selling service
        self.srv = self.create_service(Ticket,
                                        'ticket',
                                        self.sell_ticket_callback)

        # create ticket information publisher
        self.publisher_ = self.create_publisher(ConcertInfo,
                                                'ticket_info', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def goal_callback(self, goal_request):
        self.get_logger().info(f"Received goal request for concert: {goal_request.concert_name}")
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info("Received cancel request")
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        # update new concert info 
        request = goal_handle.request
        self.concert_count += 1
        self.concert_names.append(request.concert_name)
        self.musn_names.append(request.musn_name)
        self.concert_dates.append(request.concert_date)
        self.prices.append(request.price)
        self.remng_durations.append(request.duration)
        self.remg_ticket.append(request.quantity)
        self.sale_count.append(0)
        concert_id = self.concert_count - 1
        self.get_logger().info(f"Added new concert: {request.concert_name}")

        # simulate ticket selling process
        for day in range(request.duration):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return TicketSale.Result()
            feedback_msg = TicketSale.Feedback()
            feedback_msg.sale_count = self.sale_count[concert_id]
            feedback_msg.revenue = self.sale_count[concert_id] * self.prices[concert_id]
            feedback_msg.remng_duration = self.remng_durations[concert_id]
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f"Feedback: {feedback_msg.sale_count} tickets sold so far")

        goal_handle.succeed()
        
        # return result
        result = TicketSale.Result()
        result.revenue = feedback_msg.revenue
        result.sale_count = feedback_msg.sale_count
        self.get_logger().info(f"Result: {result.sale_count} tickets sold")
        return result


    def timer_callback(self):
        # update new remng durations
        for i in range(self.concert_count):
            if self.remng_durations[i] > 0:
                self.remng_durations[i] -= 1

        # construct concert info message
        msg = ConcertInfo()
        msg.concert_count = self.concert_count
        msg.concert_names = self.concert_names
        msg.musn_names = self.musn_names
        msg.concert_dates = self.concert_dates
        msg.prices = self.prices
        msg.remng_durations = self.remng_durations
        msg.remng_ticket = self.remg_ticket

        self.publisher_.publish(msg)
        self.get_logger().info(f"[Topic] Published concert info: {msg.remng_durations} days left")

    def sell_ticket_callback(self, request, response):
        id = request.id
        concert_id = request.concert_id
        customer_id = request.customer_id
        quantity = request.quantity
        price = request.price


        if concert_id < 0 or concert_id >= self.concert_count:
            self.get_logger().info('Invalid concert ID: %d' % (concert_id))
            response.success = False
            response.message = 'Invalid concert ID'
            return response
        
        if price < self.prices[concert_id]:
            self.get_logger().info('Insufficient price: %d, required: %d' % (price, self.prices[concert_id]))
            response.success = False
            response.message = 'Insufficient price'
            return response
        
        if quantity <= 0:
            self.get_logger().info('Invalid quantity: %d' % (quantity))
            response.success = False
            response.message = 'Invalid quantity'
            return response
        
        if quantity > self.remg_ticket[concert_id]:
            self.get_logger().info('Not enough tickets available. Requested: %d, Available: %d' % (quantity, self.remg_ticket[concert_id]))
            response.success = False
            response.message = 'Not enough tickets available'
            return response

        self.remg_ticket[concert_id] -= quantity
        self.get_logger().info('Sold %d tickets for concert ID %d to customer ID %d' % (quantity, concert_id, customer_id))
        response.success = True
        response.message = 'Tickets purchased successfully'

        return response


def main():
    rclpy.init()

    minimal_service = SellTicketService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()