// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "more_interfaces/msg/concert_info.hpp"


#ifndef MORE_INTERFACES__MSG__DETAIL__CONCERT_INFO__BUILDER_HPP_
#define MORE_INTERFACES__MSG__DETAIL__CONCERT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/msg/detail/concert_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace msg
{

namespace builder
{

class Init_ConcertInfo_remng_durations
{
public:
  explicit Init_ConcertInfo_remng_durations(::more_interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  ::more_interfaces::msg::ConcertInfo remng_durations(::more_interfaces::msg::ConcertInfo::_remng_durations_type arg)
  {
    msg_.remng_durations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_prices
{
public:
  explicit Init_ConcertInfo_prices(::more_interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_remng_durations prices(::more_interfaces::msg::ConcertInfo::_prices_type arg)
  {
    msg_.prices = std::move(arg);
    return Init_ConcertInfo_remng_durations(msg_);
  }

private:
  ::more_interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_concert_dates
{
public:
  explicit Init_ConcertInfo_concert_dates(::more_interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_prices concert_dates(::more_interfaces::msg::ConcertInfo::_concert_dates_type arg)
  {
    msg_.concert_dates = std::move(arg);
    return Init_ConcertInfo_prices(msg_);
  }

private:
  ::more_interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_musn_names
{
public:
  explicit Init_ConcertInfo_musn_names(::more_interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_concert_dates musn_names(::more_interfaces::msg::ConcertInfo::_musn_names_type arg)
  {
    msg_.musn_names = std::move(arg);
    return Init_ConcertInfo_concert_dates(msg_);
  }

private:
  ::more_interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_concert_names
{
public:
  explicit Init_ConcertInfo_concert_names(::more_interfaces::msg::ConcertInfo & msg)
  : msg_(msg)
  {}
  Init_ConcertInfo_musn_names concert_names(::more_interfaces::msg::ConcertInfo::_concert_names_type arg)
  {
    msg_.concert_names = std::move(arg);
    return Init_ConcertInfo_musn_names(msg_);
  }

private:
  ::more_interfaces::msg::ConcertInfo msg_;
};

class Init_ConcertInfo_concert_count
{
public:
  Init_ConcertInfo_concert_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConcertInfo_concert_names concert_count(::more_interfaces::msg::ConcertInfo::_concert_count_type arg)
  {
    msg_.concert_count = std::move(arg);
    return Init_ConcertInfo_concert_names(msg_);
  }

private:
  ::more_interfaces::msg::ConcertInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::msg::ConcertInfo>()
{
  return more_interfaces::msg::builder::Init_ConcertInfo_concert_count();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__CONCERT_INFO__BUILDER_HPP_
