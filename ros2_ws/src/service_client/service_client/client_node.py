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
        self.get_logger().info(f'[Topic] Tickets left: {msg.data}')

    def send_request(self, num):
        self.req.quantity = num
        return self.cli.call_async(self.req)


def main():
    # checking command line arguments
    rclpy.init()
    minimal_client = BuyTicketService()

    while rclpy.ok():
        rclpy.spin_once(minimal_client, timeout_sec=0.1)
        # get user input and send request
        quantity = int(input("Enter number of tickets to buy: "))
        if quantity == 0:
            break
        future = minimal_client.send_request(quantity)
        rclpy.spin_until_future_complete(minimal_client, future)
        response = future.result()

        # logging the response
        if response.success:
            minimal_client.get_logger().info(
                f'Number of Tickets Bought: {quantity}')
                
        else:
            minimal_client.get_logger().info(
                'Failed to buy tickets. Not enough tickets available.')

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()