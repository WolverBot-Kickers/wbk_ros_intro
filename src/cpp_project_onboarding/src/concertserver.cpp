#include "rclcpp/rclcpp.hpp"
//#include "more_interfaces/srv/server.hpp"
#include "std_msgs/msg/string.hpp"



#include <chrono>
#include <cstdlib>
#include <memory>
#include <string>

using namespace std::chrono_literals;


/*
Your application should have a central 'Server', which makes the existing concert information public to customers, 
handles requests from customers to buy tickets, and handles requests from musicians to hold a ticket sale for an 
upcoming concert, giving them updates on the sale as it occurs.
*/

//Create a BuyTicket command that can be called by the customer
//void buyTicket(const )

//make a publisher class
//have it publish data
class ConcertServerPublisher : public rclcpp::Node {

    public:
        ConcertServerPublisher()
            : Node("concertserverpublisher"), count_(0)  //create a node called concerserver
            {
                publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
                auto timer_callback = 
                [this]() -> void {
                    auto message = std_msgs::msg::String();
                    message.data = "Hello World" + std::to_string(this->count_++);
                    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str()); //print this to command line
                    this->publisher_->publish(message); //put the message so that it is published and seeable by other nodes that want to subscribe to it   

                };

                //timer_ = this->create_wall_timer(500ms, timer_callback);
                timer_ = this->create_wall_timer(500ms, timer_callback);
            }
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
        size_t count_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    //std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("concertserver");

    /*required to interact with the custom interface
        rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service =
    node->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", &add);

    */

    //create a interface   

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to get customer buy status");

    
    rclcpp::spin(std::make_shared<ConcertServerPublisher>());
    rclcpp::shutdown();
}