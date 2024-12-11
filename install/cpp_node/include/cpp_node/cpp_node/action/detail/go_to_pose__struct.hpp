// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_node:action/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef CPP_NODE__ACTION__DETAIL__GO_TO_POSE__STRUCT_HPP_
#define CPP_NODE__ACTION__DETAIL__GO_TO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_Goal __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_Goal_
{
  using Type = GoToPose_Goal_<ContainerAllocator>;

  explicit GoToPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_x_pos = 0.0f;
      this->desired_y_pos = 0.0f;
    }
  }

  explicit GoToPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_x_pos = 0.0f;
      this->desired_y_pos = 0.0f;
    }
  }

  // field types and members
  using _desired_x_pos_type =
    float;
  _desired_x_pos_type desired_x_pos;
  using _desired_y_pos_type =
    float;
  _desired_y_pos_type desired_y_pos;

  // setters for named parameter idiom
  Type & set__desired_x_pos(
    const float & _arg)
  {
    this->desired_x_pos = _arg;
    return *this;
  }
  Type & set__desired_y_pos(
    const float & _arg)
  {
    this->desired_y_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_Goal
    std::shared_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_Goal
    std::shared_ptr<cpp_node::action::GoToPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_Goal_ & other) const
  {
    if (this->desired_x_pos != other.desired_x_pos) {
      return false;
    }
    if (this->desired_y_pos != other.desired_y_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_Goal_

// alias to use template instance with default allocator
using GoToPose_Goal =
  cpp_node::action::GoToPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node


#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_Result __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_Result_
{
  using Type = GoToPose_Result_<ContainerAllocator>;

  explicit GoToPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit GoToPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_Result
    std::shared_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_Result
    std::shared_ptr<cpp_node::action::GoToPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_Result_

// alias to use template instance with default allocator
using GoToPose_Result =
  cpp_node::action::GoToPose_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node


#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_Feedback __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_Feedback_
{
  using Type = GoToPose_Feedback_<ContainerAllocator>;

  explicit GoToPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x_pos = 0.0f;
      this->current_y_pos = 0.0f;
    }
  }

  explicit GoToPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x_pos = 0.0f;
      this->current_y_pos = 0.0f;
    }
  }

  // field types and members
  using _current_x_pos_type =
    float;
  _current_x_pos_type current_x_pos;
  using _current_y_pos_type =
    float;
  _current_y_pos_type current_y_pos;

  // setters for named parameter idiom
  Type & set__current_x_pos(
    const float & _arg)
  {
    this->current_x_pos = _arg;
    return *this;
  }
  Type & set__current_y_pos(
    const float & _arg)
  {
    this->current_y_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_Feedback
    std::shared_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_Feedback
    std::shared_ptr<cpp_node::action::GoToPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_Feedback_ & other) const
  {
    if (this->current_x_pos != other.current_x_pos) {
      return false;
    }
    if (this->current_y_pos != other.current_y_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_Feedback_

// alias to use template instance with default allocator
using GoToPose_Feedback =
  cpp_node::action::GoToPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "cpp_node/action/detail/go_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_SendGoal_Request __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_SendGoal_Request_
{
  using Type = GoToPose_SendGoal_Request_<ContainerAllocator>;

  explicit GoToPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GoToPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    cpp_node::action::GoToPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const cpp_node::action::GoToPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_SendGoal_Request
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_SendGoal_Request
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_SendGoal_Request_

// alias to use template instance with default allocator
using GoToPose_SendGoal_Request =
  cpp_node::action::GoToPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_SendGoal_Response __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_SendGoal_Response_
{
  using Type = GoToPose_SendGoal_Response_<ContainerAllocator>;

  explicit GoToPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GoToPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_SendGoal_Response
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_SendGoal_Response
    std::shared_ptr<cpp_node::action::GoToPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_SendGoal_Response_

// alias to use template instance with default allocator
using GoToPose_SendGoal_Response =
  cpp_node::action::GoToPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node

namespace cpp_node
{

namespace action
{

struct GoToPose_SendGoal
{
  using Request = cpp_node::action::GoToPose_SendGoal_Request;
  using Response = cpp_node::action::GoToPose_SendGoal_Response;
};

}  // namespace action

}  // namespace cpp_node


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_GetResult_Request __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_GetResult_Request_
{
  using Type = GoToPose_GetResult_Request_<ContainerAllocator>;

  explicit GoToPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GoToPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_GetResult_Request
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_GetResult_Request
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_GetResult_Request_

// alias to use template instance with default allocator
using GoToPose_GetResult_Request =
  cpp_node::action::GoToPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node


// Include directives for member types
// Member 'result'
// already included above
// #include "cpp_node/action/detail/go_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_GetResult_Response __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_GetResult_Response_
{
  using Type = GoToPose_GetResult_Response_<ContainerAllocator>;

  explicit GoToPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GoToPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    cpp_node::action::GoToPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const cpp_node::action::GoToPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_GetResult_Response
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_GetResult_Response
    std::shared_ptr<cpp_node::action::GoToPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_GetResult_Response_

// alias to use template instance with default allocator
using GoToPose_GetResult_Response =
  cpp_node::action::GoToPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node

namespace cpp_node
{

namespace action
{

struct GoToPose_GetResult
{
  using Request = cpp_node::action::GoToPose_GetResult_Request;
  using Response = cpp_node::action::GoToPose_GetResult_Response;
};

}  // namespace action

}  // namespace cpp_node


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "cpp_node/action/detail/go_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_node__action__GoToPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__cpp_node__action__GoToPose_FeedbackMessage __declspec(deprecated)
#endif

namespace cpp_node
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPose_FeedbackMessage_
{
  using Type = GoToPose_FeedbackMessage_<ContainerAllocator>;

  explicit GoToPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GoToPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    cpp_node::action::GoToPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const cpp_node::action::GoToPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_node__action__GoToPose_FeedbackMessage
    std::shared_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_node__action__GoToPose_FeedbackMessage
    std::shared_ptr<cpp_node::action::GoToPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPose_FeedbackMessage_

// alias to use template instance with default allocator
using GoToPose_FeedbackMessage =
  cpp_node::action::GoToPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cpp_node

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace cpp_node
{

namespace action
{

struct GoToPose
{
  /// The goal message defined in the action definition.
  using Goal = cpp_node::action::GoToPose_Goal;
  /// The result message defined in the action definition.
  using Result = cpp_node::action::GoToPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = cpp_node::action::GoToPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = cpp_node::action::GoToPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = cpp_node::action::GoToPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = cpp_node::action::GoToPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GoToPose GoToPose;

}  // namespace action

}  // namespace cpp_node

#endif  // CPP_NODE__ACTION__DETAIL__GO_TO_POSE__STRUCT_HPP_
