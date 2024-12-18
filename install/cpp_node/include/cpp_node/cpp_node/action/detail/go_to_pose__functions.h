// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_node:action/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef CPP_NODE__ACTION__DETAIL__GO_TO_POSE__FUNCTIONS_H_
#define CPP_NODE__ACTION__DETAIL__GO_TO_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_node/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_node/action/detail/go_to_pose__struct.h"

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_Goal
 * )) before or use
 * cpp_node__action__GoToPose_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Goal__init(cpp_node__action__GoToPose_Goal * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Goal__fini(cpp_node__action__GoToPose_Goal * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_Goal *
cpp_node__action__GoToPose_Goal__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Goal__destroy(cpp_node__action__GoToPose_Goal * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Goal__are_equal(const cpp_node__action__GoToPose_Goal * lhs, const cpp_node__action__GoToPose_Goal * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Goal__copy(
  const cpp_node__action__GoToPose_Goal * input,
  cpp_node__action__GoToPose_Goal * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Goal__Sequence__init(cpp_node__action__GoToPose_Goal__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Goal__Sequence__fini(cpp_node__action__GoToPose_Goal__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_Goal__Sequence *
cpp_node__action__GoToPose_Goal__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Goal__Sequence__destroy(cpp_node__action__GoToPose_Goal__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Goal__Sequence__are_equal(const cpp_node__action__GoToPose_Goal__Sequence * lhs, const cpp_node__action__GoToPose_Goal__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Goal__Sequence__copy(
  const cpp_node__action__GoToPose_Goal__Sequence * input,
  cpp_node__action__GoToPose_Goal__Sequence * output);

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_Result
 * )) before or use
 * cpp_node__action__GoToPose_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Result__init(cpp_node__action__GoToPose_Result * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Result__fini(cpp_node__action__GoToPose_Result * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_Result *
cpp_node__action__GoToPose_Result__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Result__destroy(cpp_node__action__GoToPose_Result * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Result__are_equal(const cpp_node__action__GoToPose_Result * lhs, const cpp_node__action__GoToPose_Result * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Result__copy(
  const cpp_node__action__GoToPose_Result * input,
  cpp_node__action__GoToPose_Result * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Result__Sequence__init(cpp_node__action__GoToPose_Result__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Result__Sequence__fini(cpp_node__action__GoToPose_Result__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_Result__Sequence *
cpp_node__action__GoToPose_Result__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Result__Sequence__destroy(cpp_node__action__GoToPose_Result__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Result__Sequence__are_equal(const cpp_node__action__GoToPose_Result__Sequence * lhs, const cpp_node__action__GoToPose_Result__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Result__Sequence__copy(
  const cpp_node__action__GoToPose_Result__Sequence * input,
  cpp_node__action__GoToPose_Result__Sequence * output);

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_Feedback
 * )) before or use
 * cpp_node__action__GoToPose_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Feedback__init(cpp_node__action__GoToPose_Feedback * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Feedback__fini(cpp_node__action__GoToPose_Feedback * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_Feedback *
cpp_node__action__GoToPose_Feedback__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Feedback__destroy(cpp_node__action__GoToPose_Feedback * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Feedback__are_equal(const cpp_node__action__GoToPose_Feedback * lhs, const cpp_node__action__GoToPose_Feedback * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Feedback__copy(
  const cpp_node__action__GoToPose_Feedback * input,
  cpp_node__action__GoToPose_Feedback * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Feedback__Sequence__init(cpp_node__action__GoToPose_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Feedback__Sequence__fini(cpp_node__action__GoToPose_Feedback__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_Feedback__Sequence *
cpp_node__action__GoToPose_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_Feedback__Sequence__destroy(cpp_node__action__GoToPose_Feedback__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Feedback__Sequence__are_equal(const cpp_node__action__GoToPose_Feedback__Sequence * lhs, const cpp_node__action__GoToPose_Feedback__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_Feedback__Sequence__copy(
  const cpp_node__action__GoToPose_Feedback__Sequence * input,
  cpp_node__action__GoToPose_Feedback__Sequence * output);

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_SendGoal_Request
 * )) before or use
 * cpp_node__action__GoToPose_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Request__init(cpp_node__action__GoToPose_SendGoal_Request * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Request__fini(cpp_node__action__GoToPose_SendGoal_Request * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_SendGoal_Request *
cpp_node__action__GoToPose_SendGoal_Request__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Request__destroy(cpp_node__action__GoToPose_SendGoal_Request * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Request__are_equal(const cpp_node__action__GoToPose_SendGoal_Request * lhs, const cpp_node__action__GoToPose_SendGoal_Request * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Request__copy(
  const cpp_node__action__GoToPose_SendGoal_Request * input,
  cpp_node__action__GoToPose_SendGoal_Request * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Request__Sequence__init(cpp_node__action__GoToPose_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Request__Sequence__fini(cpp_node__action__GoToPose_SendGoal_Request__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_SendGoal_Request__Sequence *
cpp_node__action__GoToPose_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Request__Sequence__destroy(cpp_node__action__GoToPose_SendGoal_Request__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Request__Sequence__are_equal(const cpp_node__action__GoToPose_SendGoal_Request__Sequence * lhs, const cpp_node__action__GoToPose_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Request__Sequence__copy(
  const cpp_node__action__GoToPose_SendGoal_Request__Sequence * input,
  cpp_node__action__GoToPose_SendGoal_Request__Sequence * output);

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_SendGoal_Response
 * )) before or use
 * cpp_node__action__GoToPose_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Response__init(cpp_node__action__GoToPose_SendGoal_Response * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Response__fini(cpp_node__action__GoToPose_SendGoal_Response * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_SendGoal_Response *
cpp_node__action__GoToPose_SendGoal_Response__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Response__destroy(cpp_node__action__GoToPose_SendGoal_Response * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Response__are_equal(const cpp_node__action__GoToPose_SendGoal_Response * lhs, const cpp_node__action__GoToPose_SendGoal_Response * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Response__copy(
  const cpp_node__action__GoToPose_SendGoal_Response * input,
  cpp_node__action__GoToPose_SendGoal_Response * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Response__Sequence__init(cpp_node__action__GoToPose_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Response__Sequence__fini(cpp_node__action__GoToPose_SendGoal_Response__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_SendGoal_Response__Sequence *
cpp_node__action__GoToPose_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_SendGoal_Response__Sequence__destroy(cpp_node__action__GoToPose_SendGoal_Response__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Response__Sequence__are_equal(const cpp_node__action__GoToPose_SendGoal_Response__Sequence * lhs, const cpp_node__action__GoToPose_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_SendGoal_Response__Sequence__copy(
  const cpp_node__action__GoToPose_SendGoal_Response__Sequence * input,
  cpp_node__action__GoToPose_SendGoal_Response__Sequence * output);

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_GetResult_Request
 * )) before or use
 * cpp_node__action__GoToPose_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Request__init(cpp_node__action__GoToPose_GetResult_Request * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Request__fini(cpp_node__action__GoToPose_GetResult_Request * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_GetResult_Request *
cpp_node__action__GoToPose_GetResult_Request__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Request__destroy(cpp_node__action__GoToPose_GetResult_Request * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Request__are_equal(const cpp_node__action__GoToPose_GetResult_Request * lhs, const cpp_node__action__GoToPose_GetResult_Request * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Request__copy(
  const cpp_node__action__GoToPose_GetResult_Request * input,
  cpp_node__action__GoToPose_GetResult_Request * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Request__Sequence__init(cpp_node__action__GoToPose_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Request__Sequence__fini(cpp_node__action__GoToPose_GetResult_Request__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_GetResult_Request__Sequence *
cpp_node__action__GoToPose_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Request__Sequence__destroy(cpp_node__action__GoToPose_GetResult_Request__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Request__Sequence__are_equal(const cpp_node__action__GoToPose_GetResult_Request__Sequence * lhs, const cpp_node__action__GoToPose_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Request__Sequence__copy(
  const cpp_node__action__GoToPose_GetResult_Request__Sequence * input,
  cpp_node__action__GoToPose_GetResult_Request__Sequence * output);

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_GetResult_Response
 * )) before or use
 * cpp_node__action__GoToPose_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Response__init(cpp_node__action__GoToPose_GetResult_Response * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Response__fini(cpp_node__action__GoToPose_GetResult_Response * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_GetResult_Response *
cpp_node__action__GoToPose_GetResult_Response__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Response__destroy(cpp_node__action__GoToPose_GetResult_Response * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Response__are_equal(const cpp_node__action__GoToPose_GetResult_Response * lhs, const cpp_node__action__GoToPose_GetResult_Response * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Response__copy(
  const cpp_node__action__GoToPose_GetResult_Response * input,
  cpp_node__action__GoToPose_GetResult_Response * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Response__Sequence__init(cpp_node__action__GoToPose_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Response__Sequence__fini(cpp_node__action__GoToPose_GetResult_Response__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_GetResult_Response__Sequence *
cpp_node__action__GoToPose_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_GetResult_Response__Sequence__destroy(cpp_node__action__GoToPose_GetResult_Response__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Response__Sequence__are_equal(const cpp_node__action__GoToPose_GetResult_Response__Sequence * lhs, const cpp_node__action__GoToPose_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_GetResult_Response__Sequence__copy(
  const cpp_node__action__GoToPose_GetResult_Response__Sequence * input,
  cpp_node__action__GoToPose_GetResult_Response__Sequence * output);

/// Initialize action/GoToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_node__action__GoToPose_FeedbackMessage
 * )) before or use
 * cpp_node__action__GoToPose_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_FeedbackMessage__init(cpp_node__action__GoToPose_FeedbackMessage * msg);

/// Finalize action/GoToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_FeedbackMessage__fini(cpp_node__action__GoToPose_FeedbackMessage * msg);

/// Create action/GoToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_node__action__GoToPose_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_FeedbackMessage *
cpp_node__action__GoToPose_FeedbackMessage__create();

/// Destroy action/GoToPose message.
/**
 * It calls
 * cpp_node__action__GoToPose_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_FeedbackMessage__destroy(cpp_node__action__GoToPose_FeedbackMessage * msg);

/// Check for action/GoToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_FeedbackMessage__are_equal(const cpp_node__action__GoToPose_FeedbackMessage * lhs, const cpp_node__action__GoToPose_FeedbackMessage * rhs);

/// Copy a action/GoToPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_FeedbackMessage__copy(
  const cpp_node__action__GoToPose_FeedbackMessage * input,
  cpp_node__action__GoToPose_FeedbackMessage * output);

/// Initialize array of action/GoToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_node__action__GoToPose_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_FeedbackMessage__Sequence__init(cpp_node__action__GoToPose_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_FeedbackMessage__Sequence__fini(cpp_node__action__GoToPose_FeedbackMessage__Sequence * array);

/// Create array of action/GoToPose messages.
/**
 * It allocates the memory for the array and calls
 * cpp_node__action__GoToPose_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
cpp_node__action__GoToPose_FeedbackMessage__Sequence *
cpp_node__action__GoToPose_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GoToPose messages.
/**
 * It calls
 * cpp_node__action__GoToPose_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
void
cpp_node__action__GoToPose_FeedbackMessage__Sequence__destroy(cpp_node__action__GoToPose_FeedbackMessage__Sequence * array);

/// Check for action/GoToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_FeedbackMessage__Sequence__are_equal(const cpp_node__action__GoToPose_FeedbackMessage__Sequence * lhs, const cpp_node__action__GoToPose_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GoToPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_node
bool
cpp_node__action__GoToPose_FeedbackMessage__Sequence__copy(
  const cpp_node__action__GoToPose_FeedbackMessage__Sequence * input,
  cpp_node__action__GoToPose_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_NODE__ACTION__DETAIL__GO_TO_POSE__FUNCTIONS_H_
