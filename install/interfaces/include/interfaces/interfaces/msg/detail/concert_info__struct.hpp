// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/concert_info.hpp"


#ifndef INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__ConcertInfo __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__ConcertInfo __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConcertInfo_
{
  using Type = ConcertInfo_<ContainerAllocator>;

  explicit ConcertInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->concert_count = 0ll;
    }
  }

  explicit ConcertInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->concert_count = 0ll;
    }
  }

  // field types and members
  using _concert_count_type =
    int64_t;
  _concert_count_type concert_count;
  using _concert_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _concert_names_type concert_names;
  using _musn_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _musn_names_type musn_names;
  using _concert_dates_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _concert_dates_type concert_dates;
  using _prices_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _prices_type prices;
  using _remng_durations_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _remng_durations_type remng_durations;
  using _remng_ticket_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _remng_ticket_type remng_ticket;

  // setters for named parameter idiom
  Type & set__concert_count(
    const int64_t & _arg)
  {
    this->concert_count = _arg;
    return *this;
  }
  Type & set__concert_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->concert_names = _arg;
    return *this;
  }
  Type & set__musn_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->musn_names = _arg;
    return *this;
  }
  Type & set__concert_dates(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->concert_dates = _arg;
    return *this;
  }
  Type & set__prices(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->prices = _arg;
    return *this;
  }
  Type & set__remng_durations(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->remng_durations = _arg;
    return *this;
  }
  Type & set__remng_ticket(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->remng_ticket = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::ConcertInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::ConcertInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ConcertInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ConcertInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__ConcertInfo
    std::shared_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__ConcertInfo
    std::shared_ptr<interfaces::msg::ConcertInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConcertInfo_ & other) const
  {
    if (this->concert_count != other.concert_count) {
      return false;
    }
    if (this->concert_names != other.concert_names) {
      return false;
    }
    if (this->musn_names != other.musn_names) {
      return false;
    }
    if (this->concert_dates != other.concert_dates) {
      return false;
    }
    if (this->prices != other.prices) {
      return false;
    }
    if (this->remng_durations != other.remng_durations) {
      return false;
    }
    if (this->remng_ticket != other.remng_ticket) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConcertInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConcertInfo_

// alias to use template instance with default allocator
using ConcertInfo =
  interfaces::msg::ConcertInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_HPP_
