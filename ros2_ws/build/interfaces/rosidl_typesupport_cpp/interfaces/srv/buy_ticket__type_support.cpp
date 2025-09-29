// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:srv/BuyTicket.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces/srv/detail/buy_ticket__functions.h"
#include "interfaces/srv/detail/buy_ticket__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BuyTicket_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BuyTicket_Request_type_support_ids_t;

static const _BuyTicket_Request_type_support_ids_t _BuyTicket_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BuyTicket_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BuyTicket_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BuyTicket_Request_type_support_symbol_names_t _BuyTicket_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, BuyTicket_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, BuyTicket_Request)),
  }
};

typedef struct _BuyTicket_Request_type_support_data_t
{
  void * data[2];
} _BuyTicket_Request_type_support_data_t;

static _BuyTicket_Request_type_support_data_t _BuyTicket_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BuyTicket_Request_message_typesupport_map = {
  2,
  "interfaces",
  &_BuyTicket_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BuyTicket_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BuyTicket_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BuyTicket_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BuyTicket_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces__srv__BuyTicket_Request__get_type_hash,
  &interfaces__srv__BuyTicket_Request__get_type_description,
  &interfaces__srv__BuyTicket_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::BuyTicket_Request>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::BuyTicket_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces, srv, BuyTicket_Request)() {
  return get_message_type_support_handle<interfaces::srv::BuyTicket_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/srv/detail/buy_ticket__functions.h"
// already included above
// #include "interfaces/srv/detail/buy_ticket__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BuyTicket_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BuyTicket_Response_type_support_ids_t;

static const _BuyTicket_Response_type_support_ids_t _BuyTicket_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BuyTicket_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BuyTicket_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BuyTicket_Response_type_support_symbol_names_t _BuyTicket_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, BuyTicket_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, BuyTicket_Response)),
  }
};

typedef struct _BuyTicket_Response_type_support_data_t
{
  void * data[2];
} _BuyTicket_Response_type_support_data_t;

static _BuyTicket_Response_type_support_data_t _BuyTicket_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BuyTicket_Response_message_typesupport_map = {
  2,
  "interfaces",
  &_BuyTicket_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BuyTicket_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BuyTicket_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BuyTicket_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BuyTicket_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces__srv__BuyTicket_Response__get_type_hash,
  &interfaces__srv__BuyTicket_Response__get_type_description,
  &interfaces__srv__BuyTicket_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::BuyTicket_Response>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::BuyTicket_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces, srv, BuyTicket_Response)() {
  return get_message_type_support_handle<interfaces::srv::BuyTicket_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/srv/detail/buy_ticket__functions.h"
// already included above
// #include "interfaces/srv/detail/buy_ticket__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BuyTicket_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BuyTicket_Event_type_support_ids_t;

static const _BuyTicket_Event_type_support_ids_t _BuyTicket_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BuyTicket_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BuyTicket_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BuyTicket_Event_type_support_symbol_names_t _BuyTicket_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, BuyTicket_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, BuyTicket_Event)),
  }
};

typedef struct _BuyTicket_Event_type_support_data_t
{
  void * data[2];
} _BuyTicket_Event_type_support_data_t;

static _BuyTicket_Event_type_support_data_t _BuyTicket_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BuyTicket_Event_message_typesupport_map = {
  2,
  "interfaces",
  &_BuyTicket_Event_message_typesupport_ids.typesupport_identifier[0],
  &_BuyTicket_Event_message_typesupport_symbol_names.symbol_name[0],
  &_BuyTicket_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BuyTicket_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BuyTicket_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces__srv__BuyTicket_Event__get_type_hash,
  &interfaces__srv__BuyTicket_Event__get_type_description,
  &interfaces__srv__BuyTicket_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::BuyTicket_Event>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::BuyTicket_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces, srv, BuyTicket_Event)() {
  return get_message_type_support_handle<interfaces::srv::BuyTicket_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "interfaces/srv/detail/buy_ticket__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BuyTicket_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BuyTicket_type_support_ids_t;

static const _BuyTicket_type_support_ids_t _BuyTicket_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BuyTicket_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BuyTicket_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BuyTicket_type_support_symbol_names_t _BuyTicket_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, BuyTicket)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, BuyTicket)),
  }
};

typedef struct _BuyTicket_type_support_data_t
{
  void * data[2];
} _BuyTicket_type_support_data_t;

static _BuyTicket_type_support_data_t _BuyTicket_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BuyTicket_service_typesupport_map = {
  2,
  "interfaces",
  &_BuyTicket_service_typesupport_ids.typesupport_identifier[0],
  &_BuyTicket_service_typesupport_symbol_names.symbol_name[0],
  &_BuyTicket_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BuyTicket_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BuyTicket_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces::srv::BuyTicket_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces::srv::BuyTicket_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces::srv::BuyTicket_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<interfaces::srv::BuyTicket>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<interfaces::srv::BuyTicket>,
  &interfaces__srv__BuyTicket__get_type_hash,
  &interfaces__srv__BuyTicket__get_type_description,
  &interfaces__srv__BuyTicket__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces::srv::BuyTicket>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::BuyTicket_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces, srv, BuyTicket)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<interfaces::srv::BuyTicket>();
}

#ifdef __cplusplus
}
#endif
