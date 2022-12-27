// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ikinterface:srv/Ref.idl
// generated code does not contain a copyright notice
#include "ikinterface/srv/detail/ref__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ikinterface__srv__Ref_Request__init(ikinterface__srv__Ref_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
ikinterface__srv__Ref_Request__fini(ikinterface__srv__Ref_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
ikinterface__srv__Ref_Request__are_equal(const ikinterface__srv__Ref_Request * lhs, const ikinterface__srv__Ref_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
ikinterface__srv__Ref_Request__copy(
  const ikinterface__srv__Ref_Request * input,
  ikinterface__srv__Ref_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

ikinterface__srv__Ref_Request *
ikinterface__srv__Ref_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Ref_Request * msg = (ikinterface__srv__Ref_Request *)allocator.allocate(sizeof(ikinterface__srv__Ref_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ikinterface__srv__Ref_Request));
  bool success = ikinterface__srv__Ref_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ikinterface__srv__Ref_Request__destroy(ikinterface__srv__Ref_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ikinterface__srv__Ref_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ikinterface__srv__Ref_Request__Sequence__init(ikinterface__srv__Ref_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Ref_Request * data = NULL;

  if (size) {
    data = (ikinterface__srv__Ref_Request *)allocator.zero_allocate(size, sizeof(ikinterface__srv__Ref_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ikinterface__srv__Ref_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ikinterface__srv__Ref_Request__fini(&data[i - 1]);
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
ikinterface__srv__Ref_Request__Sequence__fini(ikinterface__srv__Ref_Request__Sequence * array)
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
      ikinterface__srv__Ref_Request__fini(&array->data[i]);
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

ikinterface__srv__Ref_Request__Sequence *
ikinterface__srv__Ref_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Ref_Request__Sequence * array = (ikinterface__srv__Ref_Request__Sequence *)allocator.allocate(sizeof(ikinterface__srv__Ref_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ikinterface__srv__Ref_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ikinterface__srv__Ref_Request__Sequence__destroy(ikinterface__srv__Ref_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ikinterface__srv__Ref_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ikinterface__srv__Ref_Request__Sequence__are_equal(const ikinterface__srv__Ref_Request__Sequence * lhs, const ikinterface__srv__Ref_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ikinterface__srv__Ref_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ikinterface__srv__Ref_Request__Sequence__copy(
  const ikinterface__srv__Ref_Request__Sequence * input,
  ikinterface__srv__Ref_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ikinterface__srv__Ref_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ikinterface__srv__Ref_Request * data =
      (ikinterface__srv__Ref_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ikinterface__srv__Ref_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ikinterface__srv__Ref_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ikinterface__srv__Ref_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ikinterface__srv__Ref_Response__init(ikinterface__srv__Ref_Response * msg)
{
  if (!msg) {
    return false;
  }
  // i
  return true;
}

void
ikinterface__srv__Ref_Response__fini(ikinterface__srv__Ref_Response * msg)
{
  if (!msg) {
    return;
  }
  // i
}

bool
ikinterface__srv__Ref_Response__are_equal(const ikinterface__srv__Ref_Response * lhs, const ikinterface__srv__Ref_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // i
  if (lhs->i != rhs->i) {
    return false;
  }
  return true;
}

bool
ikinterface__srv__Ref_Response__copy(
  const ikinterface__srv__Ref_Response * input,
  ikinterface__srv__Ref_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // i
  output->i = input->i;
  return true;
}

ikinterface__srv__Ref_Response *
ikinterface__srv__Ref_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Ref_Response * msg = (ikinterface__srv__Ref_Response *)allocator.allocate(sizeof(ikinterface__srv__Ref_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ikinterface__srv__Ref_Response));
  bool success = ikinterface__srv__Ref_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ikinterface__srv__Ref_Response__destroy(ikinterface__srv__Ref_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ikinterface__srv__Ref_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ikinterface__srv__Ref_Response__Sequence__init(ikinterface__srv__Ref_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Ref_Response * data = NULL;

  if (size) {
    data = (ikinterface__srv__Ref_Response *)allocator.zero_allocate(size, sizeof(ikinterface__srv__Ref_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ikinterface__srv__Ref_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ikinterface__srv__Ref_Response__fini(&data[i - 1]);
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
ikinterface__srv__Ref_Response__Sequence__fini(ikinterface__srv__Ref_Response__Sequence * array)
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
      ikinterface__srv__Ref_Response__fini(&array->data[i]);
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

ikinterface__srv__Ref_Response__Sequence *
ikinterface__srv__Ref_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Ref_Response__Sequence * array = (ikinterface__srv__Ref_Response__Sequence *)allocator.allocate(sizeof(ikinterface__srv__Ref_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ikinterface__srv__Ref_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ikinterface__srv__Ref_Response__Sequence__destroy(ikinterface__srv__Ref_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ikinterface__srv__Ref_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ikinterface__srv__Ref_Response__Sequence__are_equal(const ikinterface__srv__Ref_Response__Sequence * lhs, const ikinterface__srv__Ref_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ikinterface__srv__Ref_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ikinterface__srv__Ref_Response__Sequence__copy(
  const ikinterface__srv__Ref_Response__Sequence * input,
  ikinterface__srv__Ref_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ikinterface__srv__Ref_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ikinterface__srv__Ref_Response * data =
      (ikinterface__srv__Ref_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ikinterface__srv__Ref_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ikinterface__srv__Ref_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ikinterface__srv__Ref_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
