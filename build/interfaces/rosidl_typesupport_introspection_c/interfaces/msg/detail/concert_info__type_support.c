// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/msg/detail/concert_info__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/msg/detail/concert_info__functions.h"
#include "interfaces/msg/detail/concert_info__struct.h"


// Include directives for member types
// Member `concert_names`
// Member `musn_names`
// Member `concert_dates`
#include "rosidl_runtime_c/string_functions.h"
// Member `prices`
// Member `remng_durations`
// Member `remng_ticket`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__msg__ConcertInfo__init(message_memory);
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_fini_function(void * message_memory)
{
  interfaces__msg__ConcertInfo__fini(message_memory);
}

size_t interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__concert_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__concert_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__concert_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__concert_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__concert_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__concert_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__concert_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__concert_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__musn_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__musn_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__musn_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__musn_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__musn_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__musn_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__musn_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__musn_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__concert_dates(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__concert_dates(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__concert_dates(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__concert_dates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__concert_dates(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__concert_dates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__concert_dates(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__concert_dates(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__prices(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__prices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__prices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__prices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__prices(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__prices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__prices(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__prices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__remng_durations(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__remng_durations(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__remng_durations(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__remng_durations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__remng_durations(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__remng_durations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__remng_durations(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__remng_durations(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__remng_ticket(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__remng_ticket(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__remng_ticket(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__remng_ticket(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__remng_ticket(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__remng_ticket(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__remng_ticket(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__remng_ticket(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_member_array[7] = {
  {
    "concert_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ConcertInfo, concert_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "concert_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ConcertInfo, concert_names),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__concert_names,  // size() function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__concert_names,  // get_const(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__concert_names,  // get(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__concert_names,  // fetch(index, &value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__concert_names,  // assign(index, value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__concert_names  // resize(index) function pointer
  },
  {
    "musn_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ConcertInfo, musn_names),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__musn_names,  // size() function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__musn_names,  // get_const(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__musn_names,  // get(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__musn_names,  // fetch(index, &value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__musn_names,  // assign(index, value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__musn_names  // resize(index) function pointer
  },
  {
    "concert_dates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ConcertInfo, concert_dates),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__concert_dates,  // size() function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__concert_dates,  // get_const(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__concert_dates,  // get(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__concert_dates,  // fetch(index, &value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__concert_dates,  // assign(index, value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__concert_dates  // resize(index) function pointer
  },
  {
    "prices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ConcertInfo, prices),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__prices,  // size() function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__prices,  // get_const(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__prices,  // get(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__prices,  // fetch(index, &value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__prices,  // assign(index, value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__prices  // resize(index) function pointer
  },
  {
    "remng_durations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ConcertInfo, remng_durations),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__remng_durations,  // size() function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__remng_durations,  // get_const(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__remng_durations,  // get(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__remng_durations,  // fetch(index, &value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__remng_durations,  // assign(index, value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__remng_durations  // resize(index) function pointer
  },
  {
    "remng_ticket",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ConcertInfo, remng_ticket),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__size_function__ConcertInfo__remng_ticket,  // size() function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_const_function__ConcertInfo__remng_ticket,  // get_const(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__get_function__ConcertInfo__remng_ticket,  // get(index) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__fetch_function__ConcertInfo__remng_ticket,  // fetch(index, &value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__assign_function__ConcertInfo__remng_ticket,  // assign(index, value) function pointer
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__resize_function__ConcertInfo__remng_ticket  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_members = {
  "interfaces__msg",  // message namespace
  "ConcertInfo",  // message name
  7,  // number of fields
  sizeof(interfaces__msg__ConcertInfo),
  false,  // has_any_key_member_
  interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_member_array,  // message members
  interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_type_support_handle = {
  0,
  &interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_members,
  get_message_typesupport_handle_function,
  &interfaces__msg__ConcertInfo__get_type_hash,
  &interfaces__msg__ConcertInfo__get_type_description,
  &interfaces__msg__ConcertInfo__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, ConcertInfo)() {
  if (!interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_type_support_handle.typesupport_identifier) {
    interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__msg__ConcertInfo__rosidl_typesupport_introspection_c__ConcertInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
