// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_sdk_custom_interfaces__msg__SetPosition __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_sdk_custom_interfaces__msg__SetPosition __declspec(deprecated)
#endif

namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetPosition_
{
  using Type = SetPosition_<ContainerAllocator>;

  explicit SetPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _ids_type ids;
  using _positions_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__msg__SetPosition
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__msg__SetPosition
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::SetPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPosition_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPosition_

// alias to use template instance with default allocator
using SetPosition =
  dynamixel_sdk_custom_interfaces::msg::SetPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_HPP_
