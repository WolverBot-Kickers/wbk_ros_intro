from interfaces.msg import ConcertInfo
from interfaces.srv import Ticket
import rclpy
from rclpy.node import Node


class BuyTicketService(Node):

    def __init__(self):
        super().__init__('BuyTicketService')
        
        # create service client
        self.cli = self.create_client(Ticket, 'ticket')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Ticket.Request()

        # create number subscriber
        self.remng_durations = 0
        self.subscription = self.create_subscription(ConcertInfo, 'ticket_info', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.remng_durations = msg.remng_durations
        self.concert_info = msg
        self.get_logger().info(f'[Topic] Published concert info: {msg}')

    def send_request(self,
                        id,
                        customer_id,
                        concert_id,
                        quantity,
                        price):
        self.req.id = id
        self.req.customer_id = customer_id
        self.req.concert_id = concert_id
        self.req.price = price                
        self.req.quantity = quantity
        return self.cli.call_async(self.req)


def main():
    # checking command line arguments
    rclpy.init()
    minimal_client = BuyTicketService()
    remng_durations = minimal_client.remng_durations

    # customer information assignment
    customer_id = 1

    while rclpy.ok():
        # get user input and send request
        concert_id = int(input("Enter concert ID (0-4): "))
        quantity = int(input("Enter number of tickets to buy: "))
        price = int(input("Enter your price: "))
        _id = customer_id * 1000 + concert_id * 100 + quantity + remng_durations # random ID generation
        
        if quantity == 0 or concert_id < 0 or concert_id > 4:
            break
        future = minimal_client.send_request(_id, customer_id, concert_id, quantity, price)
        rclpy.spin_until_future_complete(minimal_client, future)
        response = future.result()

        # logging the response
        if response.success:
            minimal_client.get_logger().info(
                f'Number of Tickets Bought: {quantity}')
        else:
            minimal_client.get_logger().info(f"Buying Ticket Error: {response.message}")

        print('---')
        print("Ticket Info: [Topic] Published concert info: ", minimal_client.concert_info)
        print('---')


        

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()