// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/concert_info.hpp"


#ifndef INTERFACES__MSG__DETAIL__CONCERT_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CONCERT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/concert_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ConcertInfo_remng_ticket
{
public:
  explicit Init_ConcertInfo_remng_ticket(::interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ConcertInfo remng_ticket(::interfaces::msg::ConcertInfo::_remng_ticket_type arg)
  {
    msg_.remng_ticket = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_remng_durations
{
public:
  explicit Init_ConcertInfo_remng_durations(::interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_remng_ticket remng_durations(::interfaces::msg::ConcertInfo::_remng_durations_type arg)
  {
    msg_.remng_durations = std::move(arg);
    return Init_ConcertInfo_remng_ticket(msg_);
  }

private:
  ::interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_prices
{
public:
  explicit Init_ConcertInfo_prices(::interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_remng_durations prices(::interfaces::msg::ConcertInfo::_prices_type arg)
  {
    msg_.prices = std::move(arg);
    return Init_ConcertInfo_remng_durations(msg_);
  }

private:
  ::interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_concert_dates
{
public:
  explicit Init_ConcertInfo_concert_dates(::interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_prices concert_dates(::interfaces::msg::ConcertInfo::_concert_dates_type arg)
  {
    msg_.concert_dates = std::move(arg);
    return Init_ConcertInfo_prices(msg_);
  }

private:
  ::interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_musn_names
{
public:
  explicit Init_ConcertInfo_musn_names(::interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_concert_dates musn_names(::interfaces::msg::ConcertInfo::_musn_names_type arg)
  {
    msg_.musn_names = std::move(arg);
    return Init_ConcertInfo_concert_dates(msg_);
  }

private:
  ::interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_concert_names
{
public:
  explicit Init_ConcertInfo_concert_names(::interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_musn_names concert_names(::interfaces::msg::ConcertInfo::_concert_names_type arg)
  {
    msg_.concert_names = std::move(arg);
    return Init_ConcertInfo_musn_names(msg_);
  }

private:
  ::interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_concert_count
{
public:
  Init_ConcertInfo_concert_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConcertInfo_concert_names concert_count(::interfaces::msg::ConcertInfo::_concert_count_type arg)
  {
    msg_.concert_count = std::move(arg);
    return Init_ConcertInfo_concert_names(msg_);
  }

private:
  ::interfaces::msg::ConcertInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ConcertInfo>()
{
  return interfaces::msg::builder::Init_ConcertInfo_concert_count();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CONCERT_INFO__BUILDER_HPP_
