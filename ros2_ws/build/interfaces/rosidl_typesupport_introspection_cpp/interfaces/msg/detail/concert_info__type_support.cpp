// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/concert_info__functions.h"
#include "interfaces/msg/detail/concert_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ConcertInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::ConcertInfo(_init);
}

void ConcertInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::ConcertInfo *>(message_memory);
  typed_message->~ConcertInfo();
}

size_t size_function__ConcertInfo__concert_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConcertInfo__concert_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ConcertInfo__concert_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConcertInfo__concert_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ConcertInfo__concert_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ConcertInfo__concert_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ConcertInfo__concert_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ConcertInfo__concert_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConcertInfo__musn_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConcertInfo__musn_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ConcertInfo__musn_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConcertInfo__musn_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ConcertInfo__musn_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ConcertInfo__musn_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ConcertInfo__musn_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ConcertInfo__musn_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConcertInfo__concert_dates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConcertInfo__concert_dates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ConcertInfo__concert_dates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConcertInfo__concert_dates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ConcertInfo__concert_dates(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ConcertInfo__concert_dates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ConcertInfo__concert_dates(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ConcertInfo__concert_dates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConcertInfo__prices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConcertInfo__prices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ConcertInfo__prices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConcertInfo__prices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__ConcertInfo__prices(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__ConcertInfo__prices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__ConcertInfo__prices(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__ConcertInfo__prices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConcertInfo__remng_durations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConcertInfo__remng_durations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ConcertInfo__remng_durations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConcertInfo__remng_durations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__ConcertInfo__remng_durations(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__ConcertInfo__remng_durations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__ConcertInfo__remng_durations(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__ConcertInfo__remng_durations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConcertInfo__remng_ticket(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConcertInfo__remng_ticket(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ConcertInfo__remng_ticket(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConcertInfo__remng_ticket(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__ConcertInfo__remng_ticket(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__ConcertInfo__remng_ticket(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__ConcertInfo__remng_ticket(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__ConcertInfo__remng_ticket(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConcertInfo_message_member_array[7] = {
  {
    "concert_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ConcertInfo, concert_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "concert_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ConcertInfo, concert_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConcertInfo__concert_names,  // size() function pointer
    get_const_function__ConcertInfo__concert_names,  // get_const(index) function pointer
    get_function__ConcertInfo__concert_names,  // get(index) function pointer
    fetch_function__ConcertInfo__concert_names,  // fetch(index, &value) function pointer
    assign_function__ConcertInfo__concert_names,  // assign(index, value) function pointer
    resize_function__ConcertInfo__concert_names  // resize(index) function pointer
  },
  {
    "musn_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ConcertInfo, musn_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConcertInfo__musn_names,  // size() function pointer
    get_const_function__ConcertInfo__musn_names,  // get_const(index) function pointer
    get_function__ConcertInfo__musn_names,  // get(index) function pointer
    fetch_function__ConcertInfo__musn_names,  // fetch(index, &value) function pointer
    assign_function__ConcertInfo__musn_names,  // assign(index, value) function pointer
    resize_function__ConcertInfo__musn_names  // resize(index) function pointer
  },
  {
    "concert_dates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ConcertInfo, concert_dates),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConcertInfo__concert_dates,  // size() function pointer
    get_const_function__ConcertInfo__concert_dates,  // get_const(index) function pointer
    get_function__ConcertInfo__concert_dates,  // get(index) function pointer
    fetch_function__ConcertInfo__concert_dates,  // fetch(index, &value) function pointer
    assign_function__ConcertInfo__concert_dates,  // assign(index, value) function pointer
    resize_function__ConcertInfo__concert_dates  // resize(index) function pointer
  },
  {
    "prices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ConcertInfo, prices),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConcertInfo__prices,  // size() function pointer
    get_const_function__ConcertInfo__prices,  // get_const(index) function pointer
    get_function__ConcertInfo__prices,  // get(index) function pointer
    fetch_function__ConcertInfo__prices,  // fetch(index, &value) function pointer
    assign_function__ConcertInfo__prices,  // assign(index, value) function pointer
    resize_function__ConcertInfo__prices  // resize(index) function pointer
  },
  {
    "remng_durations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ConcertInfo, remng_durations),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConcertInfo__remng_durations,  // size() function pointer
    get_const_function__ConcertInfo__remng_durations,  // get_const(index) function pointer
    get_function__ConcertInfo__remng_durations,  // get(index) function pointer
    fetch_function__ConcertInfo__remng_durations,  // fetch(index, &value) function pointer
    assign_function__ConcertInfo__remng_durations,  // assign(index, value) function pointer
    resize_function__ConcertInfo__remng_durations  // resize(index) function pointer
  },
  {
    "remng_ticket",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ConcertInfo, remng_ticket),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConcertInfo__remng_ticket,  // size() function pointer
    get_const_function__ConcertInfo__remng_ticket,  // get_const(index) function pointer
    get_function__ConcertInfo__remng_ticket,  // get(index) function pointer
    fetch_function__ConcertInfo__remng_ticket,  // fetch(index, &value) function pointer
    assign_function__ConcertInfo__remng_ticket,  // assign(index, value) function pointer
    resize_function__ConcertInfo__remng_ticket  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConcertInfo_message_members = {
  "interfaces::msg",  // message namespace
  "ConcertInfo",  // message name
  7,  // number of fields
  sizeof(interfaces::msg::ConcertInfo),
  false,  // has_any_key_member_
  ConcertInfo_message_member_array,  // message members
  ConcertInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ConcertInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConcertInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConcertInfo_message_members,
  get_message_typesupport_handle_function,
  &interfaces__msg__ConcertInfo__get_type_hash,
  &interfaces__msg__ConcertInfo__get_type_description,
  &interfaces__msg__ConcertInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::ConcertInfo>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::ConcertInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, ConcertInfo)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::ConcertInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
