// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/concert_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ConcertInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x00, 0x84, 0x04, 0x9f, 0x58, 0x20, 0xed,
      0xcf, 0xc9, 0xba, 0x08, 0x2b, 0x5f, 0xf9, 0xa4,
      0x21, 0xbf, 0x1a, 0x70, 0x40, 0x43, 0xca, 0x01,
      0x1b, 0xb4, 0xb9, 0x1a, 0x77, 0x7c, 0x71, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ConcertInfo__TYPE_NAME[] = "interfaces/msg/ConcertInfo";

// Define type names, field names, and default values
static char interfaces__msg__ConcertInfo__FIELD_NAME__concert_count[] = "concert_count";
static char interfaces__msg__ConcertInfo__FIELD_NAME__concert_names[] = "concert_names";
static char interfaces__msg__ConcertInfo__FIELD_NAME__musn_names[] = "musn_names";
static char interfaces__msg__ConcertInfo__FIELD_NAME__concert_dates[] = "concert_dates";
static char interfaces__msg__ConcertInfo__FIELD_NAME__prices[] = "prices";
static char interfaces__msg__ConcertInfo__FIELD_NAME__remng_durations[] = "remng_durations";
static char interfaces__msg__ConcertInfo__FIELD_NAME__remng_ticket[] = "remng_ticket";

static rosidl_runtime_c__type_description__Field interfaces__msg__ConcertInfo__FIELDS[] = {
  {
    {interfaces__msg__ConcertInfo__FIELD_NAME__concert_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ConcertInfo__FIELD_NAME__concert_names, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ConcertInfo__FIELD_NAME__musn_names, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ConcertInfo__FIELD_NAME__concert_dates, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ConcertInfo__FIELD_NAME__prices, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ConcertInfo__FIELD_NAME__remng_durations, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ConcertInfo__FIELD_NAME__remng_ticket, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__ConcertInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ConcertInfo__TYPE_NAME, 26, 26},
      {interfaces__msg__ConcertInfo__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 concert_count\n"
  "string[] concert_names\n"
  "string[] musn_names\n"
  "string[] concert_dates\n"
  "int64[] prices\n"
  "int64[] remng_durations\n"
  "int64[] remng_ticket";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ConcertInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ConcertInfo__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 145, 145},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ConcertInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ConcertInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
