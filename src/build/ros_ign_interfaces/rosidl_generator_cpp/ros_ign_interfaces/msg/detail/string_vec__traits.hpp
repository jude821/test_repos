// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ign_interfaces:msg/StringVec.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__STRING_VEC__TRAITS_HPP_
#define ROS_IGN_INTERFACES__MSG__DETAIL__STRING_VEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ign_interfaces/msg/detail/string_vec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros_ign_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StringVec & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const StringVec & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StringVec & msg, bool use_flow_style = false)
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
  const ros_ign_interfaces::msg::StringVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ign_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ign_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_ign_interfaces::msg::StringVec & msg)
{
  return ros_ign_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ign_interfaces::msg::StringVec>()
{
  return "ros_ign_interfaces::msg::StringVec";
}

template<>
inline const char * name<ros_ign_interfaces::msg::StringVec>()
{
  return "ros_ign_interfaces/msg/StringVec";
}

template<>
struct has_fixed_size<ros_ign_interfaces::msg::StringVec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ign_interfaces::msg::StringVec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ign_interfaces::msg::StringVec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__STRING_VEC__TRAITS_HPP_
