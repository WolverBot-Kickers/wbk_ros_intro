// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Ticket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/ticket.hpp"


#ifndef INTERFACES__SRV__DETAIL__TICKET__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__TICKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/ticket__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Ticket_Request_price
{
public:
  explicit Init_Ticket_Request_price(::interfaces::srv::Ticket_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Ticket_Request price(::interfaces::srv::Ticket_Request::_price_type arg)
  {
    msg_.price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Ticket_Request msg_;
};

class Init_Ticket_Request_quantity
{
public:
  explicit Init_Ticket_Request_quantity(::interfaces::srv::Ticket_Request & msg)
  : msg_(msg)
  {}
  Init_Ticket_Request_price quantity(::interfaces::srv::Ticket_Request::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_Ticket_Request_price(msg_);
  }

private:
  ::interfaces::srv::Ticket_Request msg_;
};

class Init_Ticket_Request_concert_id
{
public:
  explicit Init_Ticket_Request_concert_id(::interfaces::srv::Ticket_Request & msg)
  : msg_(msg)
  {}
  Init_Ticket_Request_quantity concert_id(::interfaces::srv::Ticket_Request::_concert_id_type arg)
  {
    msg_.concert_id = std::move(arg);
    return Init_Ticket_Request_quantity(msg_);
  }

private:
  ::interfaces::srv::Ticket_Request msg_;
};

class Init_Ticket_Request_customer_id
{
public:
  explicit Init_Ticket_Request_customer_id(::interfaces::srv::Ticket_Request & msg)
  : msg_(msg)
  {}
  Init_Ticket_Request_concert_id customer_id(::interfaces::srv::Ticket_Request::_customer_id_type arg)
  {
    msg_.customer_id = std::move(arg);
    return Init_Ticket_Request_concert_id(msg_);
  }

private:
  ::interfaces::srv::Ticket_Request msg_;
};

class Init_Ticket_Request_id
{
public:
  Init_Ticket_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ticket_Request_customer_id id(::interfaces::srv::Ticket_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Ticket_Request_customer_id(msg_);
  }

private:
  ::interfaces::srv::Ticket_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Ticket_Request>()
{
  return interfaces::srv::builder::Init_Ticket_Request_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Ticket_Response_message
{
public:
  explicit Init_Ticket_Response_message(::interfaces::srv::Ticket_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Ticket_Response message(::interfaces::srv::Ticket_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Ticket_Response msg_;
};

class Init_Ticket_Response_success
{
public:
  Init_Ticket_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ticket_Response_message success(::interfaces::srv::Ticket_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Ticket_Response_message(msg_);
  }

private:
  ::interfaces::srv::Ticket_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Ticket_Response>()
{
  return interfaces::srv::builder::Init_Ticket_Response_success();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Ticket_Event_response
{
public:
  explicit Init_Ticket_Event_response(::interfaces::srv::Ticket_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Ticket_Event response(::interfaces::srv::Ticket_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Ticket_Event msg_;
};

class Init_Ticket_Event_request
{
public:
  explicit Init_Ticket_Event_request(::interfaces::srv::Ticket_Event & msg)
  : msg_(msg)
  {}
  Init_Ticket_Event_response request(::interfaces::srv::Ticket_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Ticket_Event_response(msg_);
  }

private:
  ::interfaces::srv::Ticket_Event msg_;
};

class Init_Ticket_Event_info
{
public:
  Init_Ticket_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ticket_Event_request info(::interfaces::srv::Ticket_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Ticket_Event_request(msg_);
  }

private:
  ::interfaces::srv::Ticket_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Ticket_Event>()
{
  return interfaces::srv::builder::Init_Ticket_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__TICKET__BUILDER_HPP_
