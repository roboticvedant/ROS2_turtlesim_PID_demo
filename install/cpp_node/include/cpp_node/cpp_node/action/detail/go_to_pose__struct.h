// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_node:action/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef CPP_NODE__ACTION__DETAIL__GO_TO_POSE__STRUCT_H_
#define CPP_NODE__ACTION__DETAIL__GO_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_Goal
{
  float desired_x_pos;
  float desired_y_pos;
} cpp_node__action__GoToPose_Goal;

// Struct for a sequence of cpp_node__action__GoToPose_Goal.
typedef struct cpp_node__action__GoToPose_Goal__Sequence
{
  cpp_node__action__GoToPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_Result
{
  bool result;
} cpp_node__action__GoToPose_Result;

// Struct for a sequence of cpp_node__action__GoToPose_Result.
typedef struct cpp_node__action__GoToPose_Result__Sequence
{
  cpp_node__action__GoToPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_Feedback
{
  float current_x_pos;
  float current_y_pos;
} cpp_node__action__GoToPose_Feedback;

// Struct for a sequence of cpp_node__action__GoToPose_Feedback.
typedef struct cpp_node__action__GoToPose_Feedback__Sequence
{
  cpp_node__action__GoToPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cpp_node/action/detail/go_to_pose__struct.h"

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cpp_node__action__GoToPose_Goal goal;
} cpp_node__action__GoToPose_SendGoal_Request;

// Struct for a sequence of cpp_node__action__GoToPose_SendGoal_Request.
typedef struct cpp_node__action__GoToPose_SendGoal_Request__Sequence
{
  cpp_node__action__GoToPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cpp_node__action__GoToPose_SendGoal_Response;

// Struct for a sequence of cpp_node__action__GoToPose_SendGoal_Response.
typedef struct cpp_node__action__GoToPose_SendGoal_Response__Sequence
{
  cpp_node__action__GoToPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cpp_node__action__GoToPose_GetResult_Request;

// Struct for a sequence of cpp_node__action__GoToPose_GetResult_Request.
typedef struct cpp_node__action__GoToPose_GetResult_Request__Sequence
{
  cpp_node__action__GoToPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cpp_node/action/detail/go_to_pose__struct.h"

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_GetResult_Response
{
  int8_t status;
  cpp_node__action__GoToPose_Result result;
} cpp_node__action__GoToPose_GetResult_Response;

// Struct for a sequence of cpp_node__action__GoToPose_GetResult_Response.
typedef struct cpp_node__action__GoToPose_GetResult_Response__Sequence
{
  cpp_node__action__GoToPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cpp_node/action/detail/go_to_pose__struct.h"

/// Struct defined in action/GoToPose in the package cpp_node.
typedef struct cpp_node__action__GoToPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cpp_node__action__GoToPose_Feedback feedback;
} cpp_node__action__GoToPose_FeedbackMessage;

// Struct for a sequence of cpp_node__action__GoToPose_FeedbackMessage.
typedef struct cpp_node__action__GoToPose_FeedbackMessage__Sequence
{
  cpp_node__action__GoToPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_node__action__GoToPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_NODE__ACTION__DETAIL__GO_TO_POSE__STRUCT_H_
