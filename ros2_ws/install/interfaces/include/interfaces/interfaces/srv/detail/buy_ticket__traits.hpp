// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/BuyTicket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/buy_ticket.hpp"


#ifndef INTERFACES__SRV__DETAIL__BUY_TICKET__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__BUY_TICKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/buy_ticket__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BuyTicket_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BuyTicket_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuyTicket_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::BuyTicket_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::BuyTicket_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::BuyTicket_Request>()
{
  return "interfaces::srv::BuyTicket_Request";
}

template<>
inline const char * name<interfaces::srv::BuyTicket_Request>()
{
  return "interfaces/srv/BuyTicket_Request";
}

template<>
struct has_fixed_size<interfaces::srv::BuyTicket_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::BuyTicket_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::BuyTicket_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BuyTicket_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BuyTicket_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuyTicket_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::BuyTicket_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::BuyTicket_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::BuyTicket_Response>()
{
  return "interfaces::srv::BuyTicket_Response";
}

template<>
inline const char * name<interfaces::srv::BuyTicket_Response>()
{
  return "interfaces/srv/BuyTicket_Response";
}

template<>
struct has_fixed_size<interfaces::srv::BuyTicket_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::BuyTicket_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::BuyTicket_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BuyTicket_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const BuyTicket_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuyTicket_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::BuyTicket_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::BuyTicket_Event & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::BuyTicket_Event>()
{
  return "interfaces::srv::BuyTicket_Event";
}

template<>
inline const char * name<interfaces::srv::BuyTicket_Event>()
{
  return "interfaces/srv/BuyTicket_Event";
}

template<>
struct has_fixed_size<interfaces::srv::BuyTicket_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::BuyTicket_Event>
  : std::integral_constant<bool, has_bounded_size<interfaces::srv::BuyTicket_Request>::value && has_bounded_size<interfaces::srv::BuyTicket_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interfaces::srv::BuyTicket_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::BuyTicket>()
{
  return "interfaces::srv::BuyTicket";
}

template<>
inline const char * name<interfaces::srv::BuyTicket>()
{
  return "interfaces/srv/BuyTicket";
}

template<>
struct has_fixed_size<interfaces::srv::BuyTicket>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::BuyTicket_Request>::value &&
    has_fixed_size<interfaces::srv::BuyTicket_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::BuyTicket>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::BuyTicket_Request>::value &&
    has_bounded_size<interfaces::srv::BuyTicket_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::BuyTicket>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::BuyTicket_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::BuyTicket_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__BUY_TICKET__TRAITS_HPP_
