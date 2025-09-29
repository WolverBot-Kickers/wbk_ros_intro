// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/ConcertInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/concert_info.hpp"


#ifndef INTERFACES__MSG__DETAIL__CONCERT_INFO__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__CONCERT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/concert_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConcertInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: concert_count
  {
    out << "concert_count: ";
    rosidl_generator_traits::value_to_yaml(msg.concert_count, out);
    out << ", ";
  }

  // member: concert_names
  {
    if (msg.concert_names.size() == 0) {
      out << "concert_names: []";
    } else {
      out << "concert_names: [";
      size_t pending_items = msg.concert_names.size();
      for (auto item : msg.concert_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: musn_names
  {
    if (msg.musn_names.size() == 0) {
      out << "musn_names: []";
    } else {
      out << "musn_names: [";
      size_t pending_items = msg.musn_names.size();
      for (auto item : msg.musn_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: concert_dates
  {
    if (msg.concert_dates.size() == 0) {
      out << "concert_dates: []";
    } else {
      out << "concert_dates: [";
      size_t pending_items = msg.concert_dates.size();
      for (auto item : msg.concert_dates) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prices
  {
    if (msg.prices.size() == 0) {
      out << "prices: []";
    } else {
      out << "prices: [";
      size_t pending_items = msg.prices.size();
      for (auto item : msg.prices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: remng_durations
  {
    if (msg.remng_durations.size() == 0) {
      out << "remng_durations: []";
    } else {
      out << "remng_durations: [";
      size_t pending_items = msg.remng_durations.size();
      for (auto item : msg.remng_durations) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: remng_ticket
  {
    if (msg.remng_ticket.size() == 0) {
      out << "remng_ticket: []";
    } else {
      out << "remng_ticket: [";
      size_t pending_items = msg.remng_ticket.size();
      for (auto item : msg.remng_ticket) {
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
  const ConcertInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: concert_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "concert_count: ";
    rosidl_generator_traits::value_to_yaml(msg.concert_count, out);
    out << "\n";
  }

  // member: concert_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.concert_names.size() == 0) {
      out << "concert_names: []\n";
    } else {
      out << "concert_names:\n";
      for (auto item : msg.concert_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: musn_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.musn_names.size() == 0) {
      out << "musn_names: []\n";
    } else {
      out << "musn_names:\n";
      for (auto item : msg.musn_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: concert_dates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.concert_dates.size() == 0) {
      out << "concert_dates: []\n";
    } else {
      out << "concert_dates:\n";
      for (auto item : msg.concert_dates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prices.size() == 0) {
      out << "prices: []\n";
    } else {
      out << "prices:\n";
      for (auto item : msg.prices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: remng_durations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.remng_durations.size() == 0) {
      out << "remng_durations: []\n";
    } else {
      out << "remng_durations:\n";
      for (auto item : msg.remng_durations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: remng_ticket
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.remng_ticket.size() == 0) {
      out << "remng_ticket: []\n";
    } else {
      out << "remng_ticket:\n";
      for (auto item : msg.remng_ticket) {
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

inline std::string to_yaml(const ConcertInfo & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::ConcertInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::ConcertInfo & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::ConcertInfo>()
{
  return "interfaces::msg::ConcertInfo";
}

template<>
inline const char * name<interfaces::msg::ConcertInfo>()
{
  return "interfaces/msg/ConcertInfo";
}

template<>
struct has_fixed_size<interfaces::msg::ConcertInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::ConcertInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::ConcertInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__CONCERT_INFO__TRAITS_HPP_
