// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "more_interfaces/msg/concert_info.h"


#ifndef MORE_INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_H_
#define MORE_INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'concert_names'
// Member 'musn_names'
// Member 'concert_dates'
#include "rosidl_runtime_c/string.h"
// Member 'prices'
// Member 'remng_durations'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ConcertInfo in the package more_interfaces.
typedef struct more_interfaces__msg__ConcertInfo
{
  uint8_t concert_count;
  rosidl_runtime_c__String__Sequence concert_names;
  rosidl_runtime_c__String__Sequence musn_names;
  rosidl_runtime_c__String__Sequence concert_dates;
  rosidl_runtime_c__uint8__Sequence prices;
  rosidl_runtime_c__uint8__Sequence remng_durations;
} more_interfaces__msg__ConcertInfo;

// Struct for a sequence of more_interfaces__msg__ConcertInfo.
typedef struct more_interfaces__msg__ConcertInfo__Sequence
{
  more_interfaces__msg__ConcertInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__msg__ConcertInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_H_
