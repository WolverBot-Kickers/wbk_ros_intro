cmake_minimum_required(VERSION 3.8)
project(cpp_project_onboarding)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
#find_package(more_interfaces REQUIRED)

add_executable(server src/concertserver.cpp)
ament_target_dependencies(server rclcpp)

add_executable(client src/customer.cpp)
ament_target_dependencies(client rclcpp)

install (TARGETS
  server
  client
  DESTINATION lib/${PROJECT_NAME})

ament_package()
