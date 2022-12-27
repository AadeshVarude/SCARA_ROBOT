// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ikinterface:srv/Fvel.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__FVEL__STRUCT_H_
#define IKINTERFACE__SRV__DETAIL__FVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Fvel in the package ikinterface.
typedef struct ikinterface__srv__Fvel_Request
{
  double joint1_vel;
  double joint2_vel;
  double joint3_vel;
} ikinterface__srv__Fvel_Request;

// Struct for a sequence of ikinterface__srv__Fvel_Request.
typedef struct ikinterface__srv__Fvel_Request__Sequence
{
  ikinterface__srv__Fvel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ikinterface__srv__Fvel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Fvel in the package ikinterface.
typedef struct ikinterface__srv__Fvel_Response
{
  float endeff_vel_x;
  float endeff_vel_y;
  float endeff_vel_z;
} ikinterface__srv__Fvel_Response;

// Struct for a sequence of ikinterface__srv__Fvel_Response.
typedef struct ikinterface__srv__Fvel_Response__Sequence
{
  ikinterface__srv__Fvel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ikinterface__srv__Fvel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IKINTERFACE__SRV__DETAIL__FVEL__STRUCT_H_
