// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SetVelocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_velocity__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetVelocity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamixel_sdk_custom_interfaces::msg::SetVelocity(_init);
}

void SetVelocity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamixel_sdk_custom_interfaces::msg::SetVelocity *>(message_memory);
  typed_message->~SetVelocity();
}

size_t size_function__SetVelocity__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetVelocity__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetVelocity__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetVelocity__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SetVelocity__ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SetVelocity__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SetVelocity__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SetVelocity__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetVelocity__velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetVelocity__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetVelocity__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetVelocity__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SetVelocity__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SetVelocity__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SetVelocity__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SetVelocity__velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetVelocity_message_member_array[2] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces::msg::SetVelocity, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetVelocity__ids,  // size() function pointer
    get_const_function__SetVelocity__ids,  // get_const(index) function pointer
    get_function__SetVelocity__ids,  // get(index) function pointer
    fetch_function__SetVelocity__ids,  // fetch(index, &value) function pointer
    assign_function__SetVelocity__ids,  // assign(index, value) function pointer
    resize_function__SetVelocity__ids  // resize(index) function pointer
  },
  {
    "velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces::msg::SetVelocity, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetVelocity__velocities,  // size() function pointer
    get_const_function__SetVelocity__velocities,  // get_const(index) function pointer
    get_function__SetVelocity__velocities,  // get(index) function pointer
    fetch_function__SetVelocity__velocities,  // fetch(index, &value) function pointer
    assign_function__SetVelocity__velocities,  // assign(index, value) function pointer
    resize_function__SetVelocity__velocities  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetVelocity_message_members = {
  "dynamixel_sdk_custom_interfaces::msg",  // message namespace
  "SetVelocity",  // message name
  2,  // number of fields
  sizeof(dynamixel_sdk_custom_interfaces::msg::SetVelocity),
  SetVelocity_message_member_array,  // message members
  SetVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  SetVelocity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetVelocity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetVelocity_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamixel_sdk_custom_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_sdk_custom_interfaces::msg::SetVelocity>()
{
  return &::dynamixel_sdk_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::SetVelocity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_sdk_custom_interfaces, msg, SetVelocity)() {
  return &::dynamixel_sdk_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::SetVelocity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
