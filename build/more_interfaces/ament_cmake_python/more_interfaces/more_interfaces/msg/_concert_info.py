# generated from rosidl_generator_py/resource/_idl.py.em
# with input from more_interfaces:msg/ConcertInfo.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'prices'
# Member 'remng_durations'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConcertInfo(type):
    """Metaclass of message 'ConcertInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('more_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'more_interfaces.msg.ConcertInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__concert_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__concert_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__concert_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__concert_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__concert_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConcertInfo(metaclass=Metaclass_ConcertInfo):
    """Message class 'ConcertInfo'."""

    __slots__ = [
        '_concert_count',
        '_concert_names',
        '_musn_names',
        '_concert_dates',
        '_prices',
        '_remng_durations',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'concert_count': 'uint8',
        'concert_names': 'sequence<string>',
        'musn_names': 'sequence<string>',
        'concert_dates': 'sequence<string>',
        'prices': 'sequence<uint8>',
        'remng_durations': 'sequence<uint8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.concert_count = kwargs.get('concert_count', int())
        self.concert_names = kwargs.get('concert_names', [])
        self.musn_names = kwargs.get('musn_names', [])
        self.concert_dates = kwargs.get('concert_dates', [])
        self.prices = array.array('B', kwargs.get('prices', []))
        self.remng_durations = array.array('B', kwargs.get('remng_durations', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.concert_count != other.concert_count:
            return False
        if self.concert_names != other.concert_names:
            return False
        if self.musn_names != other.musn_names:
            return False
        if self.concert_dates != other.concert_dates:
            return False
        if self.prices != other.prices:
            return False
        if self.remng_durations != other.remng_durations:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def concert_count(self):
        """Message field 'concert_count'."""
        return self._concert_count

    @concert_count.setter
    def concert_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'concert_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'concert_count' field must be an unsigned integer in [0, 255]"
        self._concert_count = value

    @builtins.property
    def concert_names(self):
        """Message field 'concert_names'."""
        return self._concert_names

    @concert_names.setter
    def concert_names(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'concert_names' field must be a set or sequence and each value of type 'str'"
        self._concert_names = value

    @builtins.property
    def musn_names(self):
        """Message field 'musn_names'."""
        return self._musn_names

    @musn_names.setter
    def musn_names(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'musn_names' field must be a set or sequence and each value of type 'str'"
        self._musn_names = value

    @builtins.property
    def concert_dates(self):
        """Message field 'concert_dates'."""
        return self._concert_dates

    @concert_dates.setter
    def concert_dates(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'concert_dates' field must be a set or sequence and each value of type 'str'"
        self._concert_dates = value

    @builtins.property
    def prices(self):
        """Message field 'prices'."""
        return self._prices

    @prices.setter
    def prices(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'prices' array.array() must have the type code of 'B'"
                self._prices = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'prices' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._prices = array.array('B', value)

    @builtins.property
    def remng_durations(self):
        """Message field 'remng_durations'."""
        return self._remng_durations

    @remng_durations.setter
    def remng_durations(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'remng_durations' array.array() must have the type code of 'B'"
                self._remng_durations = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'remng_durations' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._remng_durations = array.array('B', value)
