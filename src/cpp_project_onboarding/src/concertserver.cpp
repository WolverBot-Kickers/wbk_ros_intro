#include "rclcpp/rclcpp.hpp"
//#include "more_interfaces/srv/server.hpp"


#include <chrono>
#include <cstdlib>
#include <memory>

/*
Your application should have a central 'Server', which makes the existing concert information public to customers, 
handles requests from customers to buy tickets, and handles requests from musicians to hold a ticket sale for an 
upcoming concert, giving them updates on the sale as it occurs.
*/

//Create a BuyTicket command that can be called by the customer
//void buyTicket(const )

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("customer");

    /*required to interact with the custom interface
        rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service =
    node->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", &add);

    */

    //create a interface   

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to get customer buy status");

    rclcpp::spin(node);
    rclcpp::shutdown();
}