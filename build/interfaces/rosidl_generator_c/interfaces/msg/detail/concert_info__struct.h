// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/concert_info.h"


#ifndef INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_H_

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
// Member 'remng_ticket'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ConcertInfo in the package interfaces.
typedef struct interfaces__msg__ConcertInfo
{
  int64_t concert_count;
  rosidl_runtime_c__String__Sequence concert_names;
  rosidl_runtime_c__String__Sequence musn_names;
  rosidl_runtime_c__String__Sequence concert_dates;
  rosidl_runtime_c__int64__Sequence prices;
  rosidl_runtime_c__int64__Sequence remng_durations;
  rosidl_runtime_c__int64__Sequence remng_ticket;
} interfaces__msg__ConcertInfo;

// Struct for a sequence of interfaces__msg__ConcertInfo.
typedef struct interfaces__msg__ConcertInfo__Sequence
{
  interfaces__msg__ConcertInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ConcertInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__CONCERT_INFO__STRUCT_H_
