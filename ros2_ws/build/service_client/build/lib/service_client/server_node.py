from interfaces.srv import Ticket
from std_msgs.msg import Int64
import rclpy
from rclpy.node import Node


class SellTicketService(Node):

    def __init__(self):
        super().__init__('SellTicketService')
        self.available_ticket = 100

        # create ticket selling service
        self.srv = self.create_service(Ticket, 'ticket', self.sell_ticket_callback)

        # create ticket information publisher
        self.publisher_ = self.create_publisher(Int64, 'ticket_info', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Int64()
        msg.data = self.available_ticket
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing Ticket Info: %d' % msg.data)

    def sell_ticket_callback(self, request, response):
        self.get_logger().info('Incoming request\nnum: %d' % (request.quantity))
        if self.available_ticket > 0:
            self.available_ticket -= request.quantity
            self.get_logger().info('The Remaining tickets: %d' % (self.available_ticket))
            response.success = True
        else:
            self.get_logger().info('No tickets available')
            response.success = False

        response.tickets_left = self.available_ticket
        return response


def main():
    rclpy.init()

    minimal_service = SellTicketService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()