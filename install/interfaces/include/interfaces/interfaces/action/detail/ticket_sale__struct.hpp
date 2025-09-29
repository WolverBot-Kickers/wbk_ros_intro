// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:action/TicketSale.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/ticket_sale.hpp"


#ifndef INTERFACES__ACTION__DETAIL__TICKET_SALE__STRUCT_HPP_
#define INTERFACES__ACTION__DETAIL__TICKET_SALE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_Goal __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_Goal __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_Goal_
{
  using Type = TicketSale_Goal_<ContainerAllocator>;

  explicit TicketSale_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->musn_id = 0ll;
      this->musn_name = "";
      this->concert_name = "";
      this->concert_date = "";
      this->quantity = 0ll;
      this->price = 0ll;
      this->duration = 0ll;
    }
  }

  explicit TicketSale_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : musn_name(_alloc),
    concert_name(_alloc),
    concert_date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->musn_id = 0ll;
      this->musn_name = "";
      this->concert_name = "";
      this->concert_date = "";
      this->quantity = 0ll;
      this->price = 0ll;
      this->duration = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _musn_id_type =
    int64_t;
  _musn_id_type musn_id;
  using _musn_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _musn_name_type musn_name;
  using _concert_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _concert_name_type concert_name;
  using _concert_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _concert_date_type concert_date;
  using _quantity_type =
    int64_t;
  _quantity_type quantity;
  using _price_type =
    int64_t;
  _price_type price;
  using _duration_type =
    int64_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__musn_id(
    const int64_t & _arg)
  {
    this->musn_id = _arg;
    return *this;
  }
  Type & set__musn_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->musn_name = _arg;
    return *this;
  }
  Type & set__concert_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->concert_name = _arg;
    return *this;
  }
  Type & set__concert_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->concert_date = _arg;
    return *this;
  }
  Type & set__quantity(
    const int64_t & _arg)
  {
    this->quantity = _arg;
    return *this;
  }
  Type & set__price(
    const int64_t & _arg)
  {
    this->price = _arg;
    return *this;
  }
  Type & set__duration(
    const int64_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_Goal
    std::shared_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_Goal
    std::shared_ptr<interfaces::action::TicketSale_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_Goal_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->musn_id != other.musn_id) {
      return false;
    }
    if (this->musn_name != other.musn_name) {
      return false;
    }
    if (this->concert_name != other.concert_name) {
      return false;
    }
    if (this->concert_date != other.concert_date) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    if (this->price != other.price) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_Goal_

// alias to use template instance with default allocator
using TicketSale_Goal =
  interfaces::action::TicketSale_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_Result __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_Result __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_Result_
{
  using Type = TicketSale_Result_<ContainerAllocator>;

  explicit TicketSale_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sale_count = 0ll;
      this->revenue = 0ll;
    }
  }

  explicit TicketSale_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sale_count = 0ll;
      this->revenue = 0ll;
    }
  }

  // field types and members
  using _sale_count_type =
    int64_t;
  _sale_count_type sale_count;
  using _revenue_type =
    int64_t;
  _revenue_type revenue;

  // setters for named parameter idiom
  Type & set__sale_count(
    const int64_t & _arg)
  {
    this->sale_count = _arg;
    return *this;
  }
  Type & set__revenue(
    const int64_t & _arg)
  {
    this->revenue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_Result
    std::shared_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_Result
    std::shared_ptr<interfaces::action::TicketSale_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_Result_ & other) const
  {
    if (this->sale_count != other.sale_count) {
      return false;
    }
    if (this->revenue != other.revenue) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_Result_

// alias to use template instance with default allocator
using TicketSale_Result =
  interfaces::action::TicketSale_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_Feedback __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_Feedback_
{
  using Type = TicketSale_Feedback_<ContainerAllocator>;

  explicit TicketSale_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sale_count = 0ll;
      this->revenue = 0ll;
      this->remng_duration = 0ll;
    }
  }

  explicit TicketSale_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sale_count = 0ll;
      this->revenue = 0ll;
      this->remng_duration = 0ll;
    }
  }

  // field types and members
  using _sale_count_type =
    int64_t;
  _sale_count_type sale_count;
  using _revenue_type =
    int64_t;
  _revenue_type revenue;
  using _remng_duration_type =
    int64_t;
  _remng_duration_type remng_duration;

  // setters for named parameter idiom
  Type & set__sale_count(
    const int64_t & _arg)
  {
    this->sale_count = _arg;
    return *this;
  }
  Type & set__revenue(
    const int64_t & _arg)
  {
    this->revenue = _arg;
    return *this;
  }
  Type & set__remng_duration(
    const int64_t & _arg)
  {
    this->remng_duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_Feedback
    std::shared_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_Feedback
    std::shared_ptr<interfaces::action::TicketSale_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_Feedback_ & other) const
  {
    if (this->sale_count != other.sale_count) {
      return false;
    }
    if (this->revenue != other.revenue) {
      return false;
    }
    if (this->remng_duration != other.remng_duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_Feedback_

// alias to use template instance with default allocator
using TicketSale_Feedback =
  interfaces::action::TicketSale_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "interfaces/action/detail/ticket_sale__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_SendGoal_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_SendGoal_Request_
{
  using Type = TicketSale_SendGoal_Request_<ContainerAllocator>;

  explicit TicketSale_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TicketSale_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    interfaces::action::TicketSale_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const interfaces::action::TicketSale_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_SendGoal_Request
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_SendGoal_Request
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_SendGoal_Request_

// alias to use template instance with default allocator
using TicketSale_SendGoal_Request =
  interfaces::action::TicketSale_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_SendGoal_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_SendGoal_Response_
{
  using Type = TicketSale_SendGoal_Response_<ContainerAllocator>;

  explicit TicketSale_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TicketSale_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_SendGoal_Response
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_SendGoal_Response
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_SendGoal_Response_

// alias to use template instance with default allocator
using TicketSale_SendGoal_Response =
  interfaces::action::TicketSale_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_SendGoal_Event __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_SendGoal_Event_
{
  using Type = TicketSale_SendGoal_Event_<ContainerAllocator>;

  explicit TicketSale_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TicketSale_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_SendGoal_Event
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_SendGoal_Event
    std::shared_ptr<interfaces::action::TicketSale_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_SendGoal_Event_

// alias to use template instance with default allocator
using TicketSale_SendGoal_Event =
  interfaces::action::TicketSale_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct TicketSale_SendGoal
{
  using Request = interfaces::action::TicketSale_SendGoal_Request;
  using Response = interfaces::action::TicketSale_SendGoal_Response;
  using Event = interfaces::action::TicketSale_SendGoal_Event;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_GetResult_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_GetResult_Request_
{
  using Type = TicketSale_GetResult_Request_<ContainerAllocator>;

  explicit TicketSale_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TicketSale_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_GetResult_Request
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_GetResult_Request
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_GetResult_Request_

// alias to use template instance with default allocator
using TicketSale_GetResult_Request =
  interfaces::action::TicketSale_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/ticket_sale__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_GetResult_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_GetResult_Response_
{
  using Type = TicketSale_GetResult_Response_<ContainerAllocator>;

  explicit TicketSale_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TicketSale_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    interfaces::action::TicketSale_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const interfaces::action::TicketSale_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_GetResult_Response
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_GetResult_Response
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_GetResult_Response_

// alias to use template instance with default allocator
using TicketSale_GetResult_Response =
  interfaces::action::TicketSale_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_GetResult_Event __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_GetResult_Event_
{
  using Type = TicketSale_GetResult_Event_<ContainerAllocator>;

  explicit TicketSale_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TicketSale_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::TicketSale_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_GetResult_Event
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_GetResult_Event
    std::shared_ptr<interfaces::action::TicketSale_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_GetResult_Event_

// alias to use template instance with default allocator
using TicketSale_GetResult_Event =
  interfaces::action::TicketSale_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct TicketSale_GetResult
{
  using Request = interfaces::action::TicketSale_GetResult_Request;
  using Response = interfaces::action::TicketSale_GetResult_Response;
  using Event = interfaces::action::TicketSale_GetResult_Event;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/ticket_sale__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__TicketSale_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__TicketSale_FeedbackMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TicketSale_FeedbackMessage_
{
  using Type = TicketSale_FeedbackMessage_<ContainerAllocator>;

  explicit TicketSale_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TicketSale_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    interfaces::action::TicketSale_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const interfaces::action::TicketSale_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__TicketSale_FeedbackMessage
    std::shared_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__TicketSale_FeedbackMessage
    std::shared_ptr<interfaces::action::TicketSale_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicketSale_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicketSale_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicketSale_FeedbackMessage_

// alias to use template instance with default allocator
using TicketSale_FeedbackMessage =
  interfaces::action::TicketSale_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace interfaces
{

namespace action
{

struct TicketSale
{
  /// The goal message defined in the action definition.
  using Goal = interfaces::action::TicketSale_Goal;
  /// The result message defined in the action definition.
  using Result = interfaces::action::TicketSale_Result;
  /// The feedback message defined in the action definition.
  using Feedback = interfaces::action::TicketSale_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = interfaces::action::TicketSale_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = interfaces::action::TicketSale_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = interfaces::action::TicketSale_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TicketSale TicketSale;

}  // namespace action

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__TICKET_SALE__STRUCT_HPP_
