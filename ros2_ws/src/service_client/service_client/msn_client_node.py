import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from interfaces.action import TicketSale

class MusicianClient(Node):

    def __init__(self):
        super().__init__('musician_client')
        self._action_client = ActionClient(self, TicketSale, 'start_selling')

    def send_goal(self, id, musn_id, musn_name, concert_name, concert_date, quantity, price, duration):
        goal_msg = TicketSale.Goal()
        goal_msg.id = id
        goal_msg.musn_id = musn_id
        goal_msg.musn_name = musn_name
        goal_msg.concert_name = concert_name
        goal_msg.concert_date = concert_date
        goal_msg.quantity = quantity
        goal_msg.price = price
        goal_msg.duration = duration

        self._action_client.wait_for_server()

        self.get_logger().info(f"Sending goal for concert '{concert_name}', quantity {quantity}")
        send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        send_goal_future.add_done_callback(self.goal_response_callback)
        return send_goal_future

    def feedback_callback(self, feedback_msg):
        fb = feedback_msg.feedback
        self.get_logger().info(f"[Feedback] Sold {fb.sale_count}, revenue {fb.revenue}, remng_duration {fb.remng_duration}")

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("Goal rejected :(")
            return

        self.get_logger().info("Goal accepted :)")

        get_result_future = goal_handle.get_result_async()
        get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f"[Result] Sale count: {result.sale_count}, Revenue: {result.revenue}")
        # maybe shutdown after result if that’s what you want
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    client = MusicianClient()

    # For example, get inputs from user or hardcode
    client.send_goal(
        id=1,
        musn_id=42,
        musn_name="Band A",
        concert_name="Concert X",
        concert_date="2025-10-01",
        quantity=5,
        price=100,
        duration=5
    )
    rclpy.spin(client)

if __name__ == '__main__':
    main()
