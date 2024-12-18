// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_node:action/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef CPP_NODE__ACTION__DETAIL__GO_TO_POSE__BUILDER_HPP_
#define CPP_NODE__ACTION__DETAIL__GO_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_node/action/detail/go_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_Goal_desired_y_pos
{
public:
  explicit Init_GoToPose_Goal_desired_y_pos(::cpp_node::action::GoToPose_Goal & msg)
  : msg_(msg)
  {}
  ::cpp_node::action::GoToPose_Goal desired_y_pos(::cpp_node::action::GoToPose_Goal::_desired_y_pos_type arg)
  {
    msg_.desired_y_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_Goal msg_;
};

class Init_GoToPose_Goal_desired_x_pos
{
public:
  Init_GoToPose_Goal_desired_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPose_Goal_desired_y_pos desired_x_pos(::cpp_node::action::GoToPose_Goal::_desired_x_pos_type arg)
  {
    msg_.desired_x_pos = std::move(arg);
    return Init_GoToPose_Goal_desired_y_pos(msg_);
  }

private:
  ::cpp_node::action::GoToPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_Goal>()
{
  return cpp_node::action::builder::Init_GoToPose_Goal_desired_x_pos();
}

}  // namespace cpp_node


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_Result_sucess
{
public:
  Init_GoToPose_Result_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_node::action::GoToPose_Result sucess(::cpp_node::action::GoToPose_Result::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_Result>()
{
  return cpp_node::action::builder::Init_GoToPose_Result_sucess();
}

}  // namespace cpp_node


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_Feedback_current_y_pos
{
public:
  explicit Init_GoToPose_Feedback_current_y_pos(::cpp_node::action::GoToPose_Feedback & msg)
  : msg_(msg)
  {}
  ::cpp_node::action::GoToPose_Feedback current_y_pos(::cpp_node::action::GoToPose_Feedback::_current_y_pos_type arg)
  {
    msg_.current_y_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_Feedback msg_;
};

class Init_GoToPose_Feedback_current_x_pos
{
public:
  Init_GoToPose_Feedback_current_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPose_Feedback_current_y_pos current_x_pos(::cpp_node::action::GoToPose_Feedback::_current_x_pos_type arg)
  {
    msg_.current_x_pos = std::move(arg);
    return Init_GoToPose_Feedback_current_y_pos(msg_);
  }

private:
  ::cpp_node::action::GoToPose_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_Feedback>()
{
  return cpp_node::action::builder::Init_GoToPose_Feedback_current_x_pos();
}

}  // namespace cpp_node


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_SendGoal_Request_goal
{
public:
  explicit Init_GoToPose_SendGoal_Request_goal(::cpp_node::action::GoToPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::cpp_node::action::GoToPose_SendGoal_Request goal(::cpp_node::action::GoToPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_SendGoal_Request msg_;
};

class Init_GoToPose_SendGoal_Request_goal_id
{
public:
  Init_GoToPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPose_SendGoal_Request_goal goal_id(::cpp_node::action::GoToPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPose_SendGoal_Request_goal(msg_);
  }

private:
  ::cpp_node::action::GoToPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_SendGoal_Request>()
{
  return cpp_node::action::builder::Init_GoToPose_SendGoal_Request_goal_id();
}

}  // namespace cpp_node


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_SendGoal_Response_stamp
{
public:
  explicit Init_GoToPose_SendGoal_Response_stamp(::cpp_node::action::GoToPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::cpp_node::action::GoToPose_SendGoal_Response stamp(::cpp_node::action::GoToPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_SendGoal_Response msg_;
};

class Init_GoToPose_SendGoal_Response_accepted
{
public:
  Init_GoToPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPose_SendGoal_Response_stamp accepted(::cpp_node::action::GoToPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoToPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::cpp_node::action::GoToPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_SendGoal_Response>()
{
  return cpp_node::action::builder::Init_GoToPose_SendGoal_Response_accepted();
}

}  // namespace cpp_node


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_GetResult_Request_goal_id
{
public:
  Init_GoToPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_node::action::GoToPose_GetResult_Request goal_id(::cpp_node::action::GoToPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_GetResult_Request>()
{
  return cpp_node::action::builder::Init_GoToPose_GetResult_Request_goal_id();
}

}  // namespace cpp_node


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_GetResult_Response_result
{
public:
  explicit Init_GoToPose_GetResult_Response_result(::cpp_node::action::GoToPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::cpp_node::action::GoToPose_GetResult_Response result(::cpp_node::action::GoToPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_GetResult_Response msg_;
};

class Init_GoToPose_GetResult_Response_status
{
public:
  Init_GoToPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPose_GetResult_Response_result status(::cpp_node::action::GoToPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoToPose_GetResult_Response_result(msg_);
  }

private:
  ::cpp_node::action::GoToPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_GetResult_Response>()
{
  return cpp_node::action::builder::Init_GoToPose_GetResult_Response_status();
}

}  // namespace cpp_node


namespace cpp_node
{

namespace action
{

namespace builder
{

class Init_GoToPose_FeedbackMessage_feedback
{
public:
  explicit Init_GoToPose_FeedbackMessage_feedback(::cpp_node::action::GoToPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::cpp_node::action::GoToPose_FeedbackMessage feedback(::cpp_node::action::GoToPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_node::action::GoToPose_FeedbackMessage msg_;
};

class Init_GoToPose_FeedbackMessage_goal_id
{
public:
  Init_GoToPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPose_FeedbackMessage_feedback goal_id(::cpp_node::action::GoToPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::cpp_node::action::GoToPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_node::action::GoToPose_FeedbackMessage>()
{
  return cpp_node::action::builder::Init_GoToPose_FeedbackMessage_goal_id();
}

}  // namespace cpp_node

#endif  // CPP_NODE__ACTION__DETAIL__GO_TO_POSE__BUILDER_HPP_
