// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_node:action/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef CPP_NODE__ACTION__DETAIL__GO_TO_POSE__TRAITS_HPP_
#define CPP_NODE__ACTION__DETAIL__GO_TO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_node/action/detail/go_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: desired_x_pos
  {
    out << "desired_x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_x_pos, out);
    out << ", ";
  }

  // member: desired_y_pos
  {
    out << "desired_y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_y_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: desired_x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_x_pos, out);
    out << "\n";
  }

  // member: desired_y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_y_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_Goal & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_Goal>()
{
  return "cpp_node::action::GoToPose_Goal";
}

template<>
inline const char * name<cpp_node::action::GoToPose_Goal>()
{
  return "cpp_node/action/GoToPose_Goal";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_node::action::GoToPose_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_Result & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_Result>()
{
  return "cpp_node::action::GoToPose_Result";
}

template<>
inline const char * name<cpp_node::action::GoToPose_Result>()
{
  return "cpp_node/action/GoToPose_Result";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_node::action::GoToPose_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_x_pos
  {
    out << "current_x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x_pos, out);
    out << ", ";
  }

  // member: current_y_pos
  {
    out << "current_y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x_pos, out);
    out << "\n";
  }

  // member: current_y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_Feedback & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_Feedback>()
{
  return "cpp_node::action::GoToPose_Feedback";
}

template<>
inline const char * name<cpp_node::action::GoToPose_Feedback>()
{
  return "cpp_node/action/GoToPose_Feedback";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_node::action::GoToPose_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "cpp_node/action/detail/go_to_pose__traits.hpp"

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_SendGoal_Request & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_SendGoal_Request>()
{
  return "cpp_node::action::GoToPose_SendGoal_Request";
}

template<>
inline const char * name<cpp_node::action::GoToPose_SendGoal_Request>()
{
  return "cpp_node/action/GoToPose_SendGoal_Request";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<cpp_node::action::GoToPose_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<cpp_node::action::GoToPose_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cpp_node::action::GoToPose_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_SendGoal_Response & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_SendGoal_Response>()
{
  return "cpp_node::action::GoToPose_SendGoal_Response";
}

template<>
inline const char * name<cpp_node::action::GoToPose_SendGoal_Response>()
{
  return "cpp_node/action/GoToPose_SendGoal_Response";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<cpp_node::action::GoToPose_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_node::action::GoToPose_SendGoal>()
{
  return "cpp_node::action::GoToPose_SendGoal";
}

template<>
inline const char * name<cpp_node::action::GoToPose_SendGoal>()
{
  return "cpp_node/action/GoToPose_SendGoal";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_node::action::GoToPose_SendGoal_Request>::value &&
    has_fixed_size<cpp_node::action::GoToPose_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_node::action::GoToPose_SendGoal_Request>::value &&
    has_bounded_size<cpp_node::action::GoToPose_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<cpp_node::action::GoToPose_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_node::action::GoToPose_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_node::action::GoToPose_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_GetResult_Request & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_GetResult_Request>()
{
  return "cpp_node::action::GoToPose_GetResult_Request";
}

template<>
inline const char * name<cpp_node::action::GoToPose_GetResult_Request>()
{
  return "cpp_node/action/GoToPose_GetResult_Request";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cpp_node::action::GoToPose_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "cpp_node/action/detail/go_to_pose__traits.hpp"

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_GetResult_Response & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_GetResult_Response>()
{
  return "cpp_node::action::GoToPose_GetResult_Response";
}

template<>
inline const char * name<cpp_node::action::GoToPose_GetResult_Response>()
{
  return "cpp_node/action/GoToPose_GetResult_Response";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<cpp_node::action::GoToPose_Result>::value> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<cpp_node::action::GoToPose_Result>::value> {};

template<>
struct is_message<cpp_node::action::GoToPose_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_node::action::GoToPose_GetResult>()
{
  return "cpp_node::action::GoToPose_GetResult";
}

template<>
inline const char * name<cpp_node::action::GoToPose_GetResult>()
{
  return "cpp_node/action/GoToPose_GetResult";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_node::action::GoToPose_GetResult_Request>::value &&
    has_fixed_size<cpp_node::action::GoToPose_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_node::action::GoToPose_GetResult_Request>::value &&
    has_bounded_size<cpp_node::action::GoToPose_GetResult_Response>::value
  >
{
};

template<>
struct is_service<cpp_node::action::GoToPose_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_node::action::GoToPose_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_node::action::GoToPose_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "cpp_node/action/detail/go_to_pose__traits.hpp"

namespace cpp_node
{

namespace action
{

inline void to_flow_style_yaml(
  const GoToPose_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cpp_node

namespace rosidl_generator_traits
{

[[deprecated("use cpp_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_node::action::GoToPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_node::action::to_yaml() instead")]]
inline std::string to_yaml(const cpp_node::action::GoToPose_FeedbackMessage & msg)
{
  return cpp_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_node::action::GoToPose_FeedbackMessage>()
{
  return "cpp_node::action::GoToPose_FeedbackMessage";
}

template<>
inline const char * name<cpp_node::action::GoToPose_FeedbackMessage>()
{
  return "cpp_node/action/GoToPose_FeedbackMessage";
}

template<>
struct has_fixed_size<cpp_node::action::GoToPose_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<cpp_node::action::GoToPose_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cpp_node::action::GoToPose_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<cpp_node::action::GoToPose_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cpp_node::action::GoToPose_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<cpp_node::action::GoToPose>
  : std::true_type
{
};

template<>
struct is_action_goal<cpp_node::action::GoToPose_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<cpp_node::action::GoToPose_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<cpp_node::action::GoToPose_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CPP_NODE__ACTION__DETAIL__GO_TO_POSE__TRAITS_HPP_
