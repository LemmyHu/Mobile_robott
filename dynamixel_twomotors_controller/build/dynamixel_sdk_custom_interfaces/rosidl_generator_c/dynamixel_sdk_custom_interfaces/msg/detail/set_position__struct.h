// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:msg/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SetPosition in the package dynamixel_sdk_custom_interfaces.
/**
  * Messages
 */
typedef struct dynamixel_sdk_custom_interfaces__msg__SetPosition
{
  rosidl_runtime_c__uint8__Sequence ids;
  rosidl_runtime_c__int32__Sequence positions;
} dynamixel_sdk_custom_interfaces__msg__SetPosition;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__msg__SetPosition.
typedef struct dynamixel_sdk_custom_interfaces__msg__SetPosition__Sequence
{
  dynamixel_sdk_custom_interfaces__msg__SetPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__msg__SetPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_H_
