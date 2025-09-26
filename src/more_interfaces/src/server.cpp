#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
//#include "more_interfaces/msg/ConcertInfo.msg"
#include "more_interfaces/msg/concert_info.hpp"

using namespace std::chrono_literals;

class ServerForConcerts : public rclcpp::Node 
{
public:
    ServerForConcerts()
        : Node("ServerForConcerts")
        {
            ServerForConcerts_ = this->create_publisher<more_interfaces::msg::ConcertInfo>("concert_info", 10);


            auto publish_msg = [this]() -> void {
                auto message = more_interfaces::msg::ConcertInfo();

                message.concert_count = 1;
                message.concert_names[0] = "Last Stand";
                message.musn_names[0] = "Bobby the Bob";
                message.concert_dates[0] = "Sep. 23, 2023";
                message.prices[0] = 269;
                message.remng_durations[0] = 99;

                std::cout << "Publishing First Concert\nConcert Number:" << message.concert_count <<
                "  Concert Name: " << message.concert_names[0] << 
                "  Musician Name: " << message.musn_names[0] <<
                "  Concert Date: " << message.concert_dates[0] <<
                "  Concert Price: " << message.prices[0] <<
                "  Concert remng_durations" << message.remng_durations[0] <<
                std::endl;

                this->ServerForConcerts_->publish(message);
            };  
            timer_ = this->create_wall_timer(1s, publish_msg);
        }

private:
    rclcpp::Publisher<more_interfaces::msg::ConcertInfo>::SharedPtr ServerForConcerts_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ServerForConcerts>());
  rclcpp::shutdown();

  return 0;
}