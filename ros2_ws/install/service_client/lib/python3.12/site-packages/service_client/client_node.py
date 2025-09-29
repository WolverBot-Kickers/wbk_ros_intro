import sys
from interfaces.msg import Num
from interfaces.srv import Ticket
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

class BuyTicketService(Node):

    def __init__(self):
        super().__init__('BuyTicketService')
        
        # create service client
        self.cli = self.create_client(Ticket, 'ticket')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Ticket.Request()

        # create number subscriber
        self.subscription = self.create_subscription(Int64, 'ticket_info', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Available Tickets: %d' % msg.data)

    def send_request(self, num):
        self.req.quantity = num
        return self.cli.call_async(self.req)


def main():
    # checking command line arguments
    rclpy.init()
    minimal_client = BuyTicketService()
    future = minimal_client.send_request(int(sys.argv[1]))
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()

    # logging the response
    minimal_client.get_logger().info(
        'Number of Tickets Bought: %d, Available Ticket: %d' %
        (int(sys.argv[1]), response.tickets_left))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()