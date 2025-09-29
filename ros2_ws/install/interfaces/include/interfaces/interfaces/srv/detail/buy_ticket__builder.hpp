// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/BuyTicket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/buy_ticket.hpp"


#ifndef INTERFACES__SRV__DETAIL__BUY_TICKET__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__BUY_TICKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/buy_ticket__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_BuyTicket_Request_num
{
public:
  Init_BuyTicket_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::BuyTicket_Request num(::interfaces::srv::BuyTicket_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::BuyTicket_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::BuyTicket_Request>()
{
  return interfaces::srv::builder::Init_BuyTicket_Request_num();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_BuyTicket_Response_available
{
public:
  Init_BuyTicket_Response_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::BuyTicket_Response available(::interfaces::srv::BuyTicket_Response::_available_type arg)
  {
    msg_.available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::BuyTicket_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::BuyTicket_Response>()
{
  return interfaces::srv::builder::Init_BuyTicket_Response_available();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_BuyTicket_Event_response
{
public:
  explicit Init_BuyTicket_Event_response(::interfaces::srv::BuyTicket_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::BuyTicket_Event response(::interfaces::srv::BuyTicket_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::BuyTicket_Event msg_;
};

class Init_BuyTicket_Event_request
{
public:
  explicit Init_BuyTicket_Event_request(::interfaces::srv::BuyTicket_Event & msg)
  : msg_(msg)
  {}
  Init_BuyTicket_Event_response request(::interfaces::srv::BuyTicket_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BuyTicket_Event_response(msg_);
  }

private:
  ::interfaces::srv::BuyTicket_Event msg_;
};

class Init_BuyTicket_Event_info
{
public:
  Init_BuyTicket_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BuyTicket_Event_request info(::interfaces::srv::BuyTicket_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BuyTicket_Event_request(msg_);
  }

private:
  ::interfaces::srv::BuyTicket_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::BuyTicket_Event>()
{
  return interfaces::srv::builder::Init_BuyTicket_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__BUY_TICKET__BUILDER_HPP_
