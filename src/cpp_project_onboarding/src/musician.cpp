#include "rclcpp/rclcpp.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

/*
Similarly, the Musician 'client' should be able to provide concert information and desired ticket 
information to call on the server to host a ticket sale. When the ticket sale completes, they should 
be informed of the final sale revenue and statistics. Additionally, they should be able to receive updates on the ticket sale when it is ongoing.
*/

using namespace std::chrono_literals;


int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("musician");
/*
    auto result = client->async_send_request(request);
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(node, result) ==
        rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->sum);
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
    }*/
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Musician Exists");

    rclcpp::spin(node);
    rclcpp::shutdown();
}