import rclpy
from rclpy.node import Node
from rclpy.action import TicketSale
from rclpy.action import ActionClient


class MSNTicketClient(Node):

    def __init__(self):
        super().__init__('MSN_Ticket_Client')
        self._action_client = ActionClient(self, TicketSale, 'start_selling')

    def send_goal(self, order):
        goal_msg = TicketSale.Goal()
        goal_msg.order = order

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)


def main(args=None):
    rclpy.init(args=args)

    action_client = FibonacciActionClient()

    future = action_client.send_goal(id = 123,
                                    musn_id = 456,
                                    musn_name = "Famous Band",
                                    concert_name = "Live in City",
                                    concert_date = "2024-12-31",
                                    quantity = 100,
                                    price = 150,
                                    duration = 30)

    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()