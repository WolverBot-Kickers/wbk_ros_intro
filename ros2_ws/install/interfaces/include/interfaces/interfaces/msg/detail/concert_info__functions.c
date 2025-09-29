// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/concert_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `concert_names`
// Member `musn_names`
// Member `concert_dates`
#include "rosidl_runtime_c/string_functions.h"
// Member `prices`
// Member `remng_durations`
// Member `remng_ticket`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__msg__ConcertInfo__init(interfaces__msg__ConcertInfo * msg)
{
  if (!msg) {
    return false;
  }
  // concert_count
  // concert_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->concert_names, 0)) {
    interfaces__msg__ConcertInfo__fini(msg);
    return false;
  }
  // musn_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->musn_names, 0)) {
    interfaces__msg__ConcertInfo__fini(msg);
    return false;
  }
  // concert_dates
  if (!rosidl_runtime_c__String__Sequence__init(&msg->concert_dates, 0)) {
    interfaces__msg__ConcertInfo__fini(msg);
    return false;
  }
  // prices
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->prices, 0)) {
    interfaces__msg__ConcertInfo__fini(msg);
    return false;
  }
  // remng_durations
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->remng_durations, 0)) {
    interfaces__msg__ConcertInfo__fini(msg);
    return false;
  }
  // remng_ticket
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->remng_ticket, 0)) {
    interfaces__msg__ConcertInfo__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__ConcertInfo__fini(interfaces__msg__ConcertInfo * msg)
{
  if (!msg) {
    return;
  }
  // concert_count
  // concert_names
  rosidl_runtime_c__String__Sequence__fini(&msg->concert_names);
  // musn_names
  rosidl_runtime_c__String__Sequence__fini(&msg->musn_names);
  // concert_dates
  rosidl_runtime_c__String__Sequence__fini(&msg->concert_dates);
  // prices
  rosidl_runtime_c__int64__Sequence__fini(&msg->prices);
  // remng_durations
  rosidl_runtime_c__int64__Sequence__fini(&msg->remng_durations);
  // remng_ticket
  rosidl_runtime_c__int64__Sequence__fini(&msg->remng_ticket);
}

bool
interfaces__msg__ConcertInfo__are_equal(const interfaces__msg__ConcertInfo * lhs, const interfaces__msg__ConcertInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // concert_count
  if (lhs->concert_count != rhs->concert_count) {
    return false;
  }
  // concert_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->concert_names), &(rhs->concert_names)))
  {
    return false;
  }
  // musn_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->musn_names), &(rhs->musn_names)))
  {
    return false;
  }
  // concert_dates
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->concert_dates), &(rhs->concert_dates)))
  {
    return false;
  }
  // prices
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->prices), &(rhs->prices)))
  {
    return false;
  }
  // remng_durations
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->remng_durations), &(rhs->remng_durations)))
  {
    return false;
  }
  // remng_ticket
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->remng_ticket), &(rhs->remng_ticket)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__ConcertInfo__copy(
  const interfaces__msg__ConcertInfo * input,
  interfaces__msg__ConcertInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // concert_count
  output->concert_count = input->concert_count;
  // concert_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->concert_names), &(output->concert_names)))
  {
    return false;
  }
  // musn_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->musn_names), &(output->musn_names)))
  {
    return false;
  }
  // concert_dates
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->concert_dates), &(output->concert_dates)))
  {
    return false;
  }
  // prices
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->prices), &(output->prices)))
  {
    return false;
  }
  // remng_durations
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->remng_durations), &(output->remng_durations)))
  {
    return false;
  }
  // remng_ticket
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->remng_ticket), &(output->remng_ticket)))
  {
    return false;
  }
  return true;
}

interfaces__msg__ConcertInfo *
interfaces__msg__ConcertInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__ConcertInfo * msg = (interfaces__msg__ConcertInfo *)allocator.allocate(sizeof(interfaces__msg__ConcertInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__ConcertInfo));
  bool success = interfaces__msg__ConcertInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__ConcertInfo__destroy(interfaces__msg__ConcertInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__ConcertInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__ConcertInfo__Sequence__init(interfaces__msg__ConcertInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__ConcertInfo * data = NULL;

  if (size) {
    data = (interfaces__msg__ConcertInfo *)allocator.zero_allocate(size, sizeof(interfaces__msg__ConcertInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__ConcertInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__ConcertInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__ConcertInfo__Sequence__fini(interfaces__msg__ConcertInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__ConcertInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__ConcertInfo__Sequence *
interfaces__msg__ConcertInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__ConcertInfo__Sequence * array = (interfaces__msg__ConcertInfo__Sequence *)allocator.allocate(sizeof(interfaces__msg__ConcertInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__ConcertInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__ConcertInfo__Sequence__destroy(interfaces__msg__ConcertInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__ConcertInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__ConcertInfo__Sequence__are_equal(const interfaces__msg__ConcertInfo__Sequence * lhs, const interfaces__msg__ConcertInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__ConcertInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__ConcertInfo__Sequence__copy(
  const interfaces__msg__ConcertInfo__Sequence * input,
  interfaces__msg__ConcertInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__ConcertInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__ConcertInfo * data =
      (interfaces__msg__ConcertInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__ConcertInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__ConcertInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__ConcertInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
