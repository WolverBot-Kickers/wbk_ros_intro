// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from more_interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

#include "more_interfaces/msg/detail/concert_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_type_hash_t *
more_interfaces__msg__ConcertInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x57, 0xf0, 0x48, 0x4f, 0x2c, 0x13, 0x85,
      0xf8, 0x7a, 0xd4, 0xfb, 0x64, 0xdc, 0x8d, 0x55,
      0x82, 0x53, 0xa5, 0x30, 0xb8, 0xbd, 0xb0, 0xd8,
      0x56, 0x21, 0x4e, 0x1a, 0x5f, 0xcc, 0xf0, 0x5f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char more_interfaces__msg__ConcertInfo__TYPE_NAME[] = "more_interfaces/msg/ConcertInfo";

// Define type names, field names, and default values
static char more_interfaces__msg__ConcertInfo__FIELD_NAME__concert_count[] = "concert_count";
static char more_interfaces__msg__ConcertInfo__FIELD_NAME__concert_names[] = "concert_names";
static char more_interfaces__msg__ConcertInfo__FIELD_NAME__musn_names[] = "musn_names";
static char more_interfaces__msg__ConcertInfo__FIELD_NAME__concert_dates[] = "concert_dates";
static char more_interfaces__msg__ConcertInfo__FIELD_NAME__prices[] = "prices";
static char more_interfaces__msg__ConcertInfo__FIELD_NAME__remng_durations[] = "remng_durations";

static rosidl_runtime_c__type_description__Field more_interfaces__msg__ConcertInfo__FIELDS[] = {
  {
    {more_interfaces__msg__ConcertInfo__FIELD_NAME__concert_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__ConcertInfo__FIELD_NAME__concert_names, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__ConcertInfo__FIELD_NAME__musn_names, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__ConcertInfo__FIELD_NAME__concert_dates, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__ConcertInfo__FIELD_NAME__prices, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__ConcertInfo__FIELD_NAME__remng_durations, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
more_interfaces__msg__ConcertInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {more_interfaces__msg__ConcertInfo__TYPE_NAME, 31, 31},
      {more_interfaces__msg__ConcertInfo__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 concert_count\n"
  "string[] concert_names\n"
  "string[] musn_names\n"
  "string[] concert_dates\n"
  "uint8[] prices\n"
  "uint8[] remng_durations";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
more_interfaces__msg__ConcertInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {more_interfaces__msg__ConcertInfo__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 124, 124},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
more_interfaces__msg__ConcertInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *more_interfaces__msg__ConcertInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
