// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ign_interfaces:msg/ParamVec.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__PARAM_VEC__TRAITS_HPP_
#define ROS_IGN_INTERFACES__MSG__DETAIL__PARAM_VEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ign_interfaces/msg/detail/param_vec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'params'
#include "rcl_interfaces/msg/detail/parameter__traits.hpp"

namespace ros_ign_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParamVec & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: params
  {
    if (msg.params.size() == 0) {
      out << "params: []";
    } else {
      out << "params: [";
      size_t pending_items = msg.params.size();
      for (auto item : msg.params) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParamVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.params.size() == 0) {
      out << "params: []\n";
    } else {
      out << "params:\n";
      for (auto item : msg.params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParamVec & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_ign_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_ign_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_ign_interfaces::msg::ParamVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ign_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ign_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_ign_interfaces::msg::ParamVec & msg)
{
  return ros_ign_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ign_interfaces::msg::ParamVec>()
{
  return "ros_ign_interfaces::msg::ParamVec";
}

template<>
inline const char * name<ros_ign_interfaces::msg::ParamVec>()
{
  return "ros_ign_interfaces/msg/ParamVec";
}

template<>
struct has_fixed_size<ros_ign_interfaces::msg::ParamVec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ign_interfaces::msg::ParamVec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ign_interfaces::msg::ParamVec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__PARAM_VEC__TRAITS_HPP_
