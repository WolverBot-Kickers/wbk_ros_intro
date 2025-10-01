#include "rclcpp/rclcpp.hpp"
//#include "example_interfaces/srv/add_two_ints.hpp"
//#include "more_interfaces/srv/server.hpp"
#include "std_msgs/msg/string.hpp"


#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

class ConcertServerPublisher : public rclcpp::Node {
    public:
        ConcertServerPublisher()
            : Node("customersubscriber") 
            {
                auto topic_callback = 
                [this](std_msgs::msg::String::UniquePtr msg) -> void {
                    RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
                };

                subscription_ = 
                    this->create_subscription<std_msgs::msg::String>("topic", 10, topic_callback);
            }

    private:
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;

};


int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    //std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("customer");
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
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Turned on");
    
    rclcpp::spin(std::make_shared<ConcertServerPublisher>());

    //rclcpp::spin(node);
    rclcpp::shutdown();
}