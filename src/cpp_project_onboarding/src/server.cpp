#include "rclcpp/rclcpp.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

/*
Your application should have a central 'Server', which makes the existing concert information public to customers, 
handles requests from customers to buy tickets, and handles requests from musicians to hold a ticket sale for an 
upcoming concert, giving them updates on the sale as it occurs.
*/

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

}