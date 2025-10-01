cmake_minimum_required(VERSION 3.8)
project(cpp_project_onboarding)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
#find_package(more_interfaces REQUIRED)

add_executable(concertserverpublisher src/concertserver.cpp)
ament_target_dependencies(concertserverpublisher rclcpp std_msgs)

add_executable(customersubscriber src/customer.cpp)
ament_target_dependencies(customersubscriber rclcpp std_msgs)

add_executable(musician src/musician.cpp)
ament_target_dependencies(musician rclcpp)



install (TARGETS
  concertserverpublisher
  customersubscriber
  musician
  DESTINATION lib/${PROJECT_NAME})

ament_package()
