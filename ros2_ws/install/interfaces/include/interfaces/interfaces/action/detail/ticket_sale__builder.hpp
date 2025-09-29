// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/TicketSale.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/ticket_sale.hpp"


#ifndef INTERFACES__ACTION__DETAIL__TICKET_SALE__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__TICKET_SALE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/action/detail/ticket_sale__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_Goal_duration
{
public:
  explicit Init_TicketSale_Goal_duration(::interfaces::action::TicketSale_Goal & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_Goal duration(::interfaces::action::TicketSale_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

class Init_TicketSale_Goal_price
{
public:
  explicit Init_TicketSale_Goal_price(::interfaces::action::TicketSale_Goal & msg)
  : msg_(msg)
  {}
  Init_TicketSale_Goal_duration price(::interfaces::action::TicketSale_Goal::_price_type arg)
  {
    msg_.price = std::move(arg);
    return Init_TicketSale_Goal_duration(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

class Init_TicketSale_Goal_quantity
{
public:
  explicit Init_TicketSale_Goal_quantity(::interfaces::action::TicketSale_Goal & msg)
  : msg_(msg)
  {}
  Init_TicketSale_Goal_price quantity(::interfaces::action::TicketSale_Goal::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_TicketSale_Goal_price(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

class Init_TicketSale_Goal_concert_date
{
public:
  explicit Init_TicketSale_Goal_concert_date(::interfaces::action::TicketSale_Goal & msg)
  : msg_(msg)
  {}
  Init_TicketSale_Goal_quantity concert_date(::interfaces::action::TicketSale_Goal::_concert_date_type arg)
  {
    msg_.concert_date = std::move(arg);
    return Init_TicketSale_Goal_quantity(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

class Init_TicketSale_Goal_concert_name
{
public:
  explicit Init_TicketSale_Goal_concert_name(::interfaces::action::TicketSale_Goal & msg)
  : msg_(msg)
  {}
  Init_TicketSale_Goal_concert_date concert_name(::interfaces::action::TicketSale_Goal::_concert_name_type arg)
  {
    msg_.concert_name = std::move(arg);
    return Init_TicketSale_Goal_concert_date(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

class Init_TicketSale_Goal_musn_name
{
public:
  explicit Init_TicketSale_Goal_musn_name(::interfaces::action::TicketSale_Goal & msg)
  : msg_(msg)
  {}
  Init_TicketSale_Goal_concert_name musn_name(::interfaces::action::TicketSale_Goal::_musn_name_type arg)
  {
    msg_.musn_name = std::move(arg);
    return Init_TicketSale_Goal_concert_name(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

class Init_TicketSale_Goal_musn_id
{
public:
  explicit Init_TicketSale_Goal_musn_id(::interfaces::action::TicketSale_Goal & msg)
  : msg_(msg)
  {}
  Init_TicketSale_Goal_musn_name musn_id(::interfaces::action::TicketSale_Goal::_musn_id_type arg)
  {
    msg_.musn_id = std::move(arg);
    return Init_TicketSale_Goal_musn_name(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

class Init_TicketSale_Goal_id
{
public:
  Init_TicketSale_Goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_Goal_musn_id id(::interfaces::action::TicketSale_Goal::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TicketSale_Goal_musn_id(msg_);
  }

private:
  ::interfaces::action::TicketSale_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_Goal>()
{
  return interfaces::action::builder::Init_TicketSale_Goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_Result_revenue
{
public:
  explicit Init_TicketSale_Result_revenue(::interfaces::action::TicketSale_Result & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_Result revenue(::interfaces::action::TicketSale_Result::_revenue_type arg)
  {
    msg_.revenue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_Result msg_;
};

class Init_TicketSale_Result_sale_count
{
public:
  Init_TicketSale_Result_sale_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_Result_revenue sale_count(::interfaces::action::TicketSale_Result::_sale_count_type arg)
  {
    msg_.sale_count = std::move(arg);
    return Init_TicketSale_Result_revenue(msg_);
  }

private:
  ::interfaces::action::TicketSale_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_Result>()
{
  return interfaces::action::builder::Init_TicketSale_Result_sale_count();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_Feedback_remng_duration
{
public:
  explicit Init_TicketSale_Feedback_remng_duration(::interfaces::action::TicketSale_Feedback & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_Feedback remng_duration(::interfaces::action::TicketSale_Feedback::_remng_duration_type arg)
  {
    msg_.remng_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_Feedback msg_;
};

class Init_TicketSale_Feedback_revenue
{
public:
  explicit Init_TicketSale_Feedback_revenue(::interfaces::action::TicketSale_Feedback & msg)
  : msg_(msg)
  {}
  Init_TicketSale_Feedback_remng_duration revenue(::interfaces::action::TicketSale_Feedback::_revenue_type arg)
  {
    msg_.revenue = std::move(arg);
    return Init_TicketSale_Feedback_remng_duration(msg_);
  }

private:
  ::interfaces::action::TicketSale_Feedback msg_;
};

class Init_TicketSale_Feedback_sale_count
{
public:
  Init_TicketSale_Feedback_sale_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_Feedback_revenue sale_count(::interfaces::action::TicketSale_Feedback::_sale_count_type arg)
  {
    msg_.sale_count = std::move(arg);
    return Init_TicketSale_Feedback_revenue(msg_);
  }

private:
  ::interfaces::action::TicketSale_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_Feedback>()
{
  return interfaces::action::builder::Init_TicketSale_Feedback_sale_count();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_SendGoal_Request_goal
{
public:
  explicit Init_TicketSale_SendGoal_Request_goal(::interfaces::action::TicketSale_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_SendGoal_Request goal(::interfaces::action::TicketSale_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_SendGoal_Request msg_;
};

class Init_TicketSale_SendGoal_Request_goal_id
{
public:
  Init_TicketSale_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_SendGoal_Request_goal goal_id(::interfaces::action::TicketSale_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TicketSale_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::TicketSale_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_SendGoal_Request>()
{
  return interfaces::action::builder::Init_TicketSale_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_SendGoal_Response_stamp
{
public:
  explicit Init_TicketSale_SendGoal_Response_stamp(::interfaces::action::TicketSale_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_SendGoal_Response stamp(::interfaces::action::TicketSale_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_SendGoal_Response msg_;
};

class Init_TicketSale_SendGoal_Response_accepted
{
public:
  Init_TicketSale_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_SendGoal_Response_stamp accepted(::interfaces::action::TicketSale_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TicketSale_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::TicketSale_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_SendGoal_Response>()
{
  return interfaces::action::builder::Init_TicketSale_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_SendGoal_Event_response
{
public:
  explicit Init_TicketSale_SendGoal_Event_response(::interfaces::action::TicketSale_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_SendGoal_Event response(::interfaces::action::TicketSale_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_SendGoal_Event msg_;
};

class Init_TicketSale_SendGoal_Event_request
{
public:
  explicit Init_TicketSale_SendGoal_Event_request(::interfaces::action::TicketSale_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_TicketSale_SendGoal_Event_response request(::interfaces::action::TicketSale_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TicketSale_SendGoal_Event_response(msg_);
  }

private:
  ::interfaces::action::TicketSale_SendGoal_Event msg_;
};

class Init_TicketSale_SendGoal_Event_info
{
public:
  Init_TicketSale_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_SendGoal_Event_request info(::interfaces::action::TicketSale_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TicketSale_SendGoal_Event_request(msg_);
  }

private:
  ::interfaces::action::TicketSale_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_SendGoal_Event>()
{
  return interfaces::action::builder::Init_TicketSale_SendGoal_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_GetResult_Request_goal_id
{
public:
  Init_TicketSale_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::TicketSale_GetResult_Request goal_id(::interfaces::action::TicketSale_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_GetResult_Request>()
{
  return interfaces::action::builder::Init_TicketSale_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_GetResult_Response_result
{
public:
  explicit Init_TicketSale_GetResult_Response_result(::interfaces::action::TicketSale_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_GetResult_Response result(::interfaces::action::TicketSale_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_GetResult_Response msg_;
};

class Init_TicketSale_GetResult_Response_status
{
public:
  Init_TicketSale_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_GetResult_Response_result status(::interfaces::action::TicketSale_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TicketSale_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::TicketSale_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_GetResult_Response>()
{
  return interfaces::action::builder::Init_TicketSale_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_GetResult_Event_response
{
public:
  explicit Init_TicketSale_GetResult_Event_response(::interfaces::action::TicketSale_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_GetResult_Event response(::interfaces::action::TicketSale_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_GetResult_Event msg_;
};

class Init_TicketSale_GetResult_Event_request
{
public:
  explicit Init_TicketSale_GetResult_Event_request(::interfaces::action::TicketSale_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_TicketSale_GetResult_Event_response request(::interfaces::action::TicketSale_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TicketSale_GetResult_Event_response(msg_);
  }

private:
  ::interfaces::action::TicketSale_GetResult_Event msg_;
};

class Init_TicketSale_GetResult_Event_info
{
public:
  Init_TicketSale_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_GetResult_Event_request info(::interfaces::action::TicketSale_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TicketSale_GetResult_Event_request(msg_);
  }

private:
  ::interfaces::action::TicketSale_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_GetResult_Event>()
{
  return interfaces::action::builder::Init_TicketSale_GetResult_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_TicketSale_FeedbackMessage_feedback
{
public:
  explicit Init_TicketSale_FeedbackMessage_feedback(::interfaces::action::TicketSale_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::TicketSale_FeedbackMessage feedback(::interfaces::action::TicketSale_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::TicketSale_FeedbackMessage msg_;
};

class Init_TicketSale_FeedbackMessage_goal_id
{
public:
  Init_TicketSale_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicketSale_FeedbackMessage_feedback goal_id(::interfaces::action::TicketSale_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TicketSale_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::TicketSale_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::TicketSale_FeedbackMessage>()
{
  return interfaces::action::builder::Init_TicketSale_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__TICKET_SALE__BUILDER_HPP_
