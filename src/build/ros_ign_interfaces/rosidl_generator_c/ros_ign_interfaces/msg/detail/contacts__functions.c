// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/Contacts.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/contacts__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `contacts`
#include "ros_ign_interfaces/msg/detail/contact__functions.h"

bool
ros_ign_interfaces__msg__Contacts__init(ros_ign_interfaces__msg__Contacts * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ign_interfaces__msg__Contacts__fini(msg);
    return false;
  }
  // contacts
  if (!ros_ign_interfaces__msg__Contact__Sequence__init(&msg->contacts, 0)) {
    ros_ign_interfaces__msg__Contacts__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__msg__Contacts__fini(ros_ign_interfaces__msg__Contacts * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // contacts
  ros_ign_interfaces__msg__Contact__Sequence__fini(&msg->contacts);
}

bool
ros_ign_interfaces__msg__Contacts__are_equal(const ros_ign_interfaces__msg__Contacts * lhs, const ros_ign_interfaces__msg__Contacts * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // contacts
  if (!ros_ign_interfaces__msg__Contact__Sequence__are_equal(
      &(lhs->contacts), &(rhs->contacts)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__Contacts__copy(
  const ros_ign_interfaces__msg__Contacts * input,
  ros_ign_interfaces__msg__Contacts * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // contacts
  if (!ros_ign_interfaces__msg__Contact__Sequence__copy(
      &(input->contacts), &(output->contacts)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__msg__Contacts *
ros_ign_interfaces__msg__Contacts__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ign_interfaces__msg__Contacts * msg = (ros_ign_interfaces__msg__Contacts *)allocator.allocate(sizeof(ros_ign_interfaces__msg__Contacts), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__Contacts));
  bool success = ros_ign_interfaces__msg__Contacts__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__Contacts__destroy(ros_ign_interfaces__msg__Contacts * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ign_interfaces__msg__Contacts__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ign_interfaces__msg__Contacts__Sequence__init(ros_ign_interfaces__msg__Contacts__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ign_interfaces__msg__Contacts * data = NULL;

  if (size) {
    data = (ros_ign_interfaces__msg__Contacts *)allocator.zero_allocate(size, sizeof(ros_ign_interfaces__msg__Contacts), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__Contacts__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__Contacts__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__Contacts__Sequence__fini(ros_ign_interfaces__msg__Contacts__Sequence * array)
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
      ros_ign_interfaces__msg__Contacts__fini(&array->data[i]);
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

ros_ign_interfaces__msg__Contacts__Sequence *
ros_ign_interfaces__msg__Contacts__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ign_interfaces__msg__Contacts__Sequence * array = (ros_ign_interfaces__msg__Contacts__Sequence *)allocator.allocate(sizeof(ros_ign_interfaces__msg__Contacts__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__Contacts__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__Contacts__Sequence__destroy(ros_ign_interfaces__msg__Contacts__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ign_interfaces__msg__Contacts__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ign_interfaces__msg__Contacts__Sequence__are_equal(const ros_ign_interfaces__msg__Contacts__Sequence * lhs, const ros_ign_interfaces__msg__Contacts__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__Contacts__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__Contacts__Sequence__copy(
  const ros_ign_interfaces__msg__Contacts__Sequence * input,
  ros_ign_interfaces__msg__Contacts__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__Contacts);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ign_interfaces__msg__Contacts * data =
      (ros_ign_interfaces__msg__Contacts *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__Contacts__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__Contacts__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ign_interfaces__msg__Contacts__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
