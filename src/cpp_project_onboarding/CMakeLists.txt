cmake_minimum_required(VERSION 3.8)
project(cpp_project_onboarding)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
#find_package(more_interfaces REQUIRED)

add_executable(concertserver src/concertserver.cpp)
ament_target_dependencies(concertserver rclcpp)

add_executable(customer src/customer.cpp)
ament_target_dependencies(customer rclcpp)

add_executable(musician src/musician.cpp)
ament_target_dependencies(musician rclcpp)

install (TARGETS
  concertserver
  customer
  musician
  DESTINATION lib/${PROJECT_NAME})

ament_package()
