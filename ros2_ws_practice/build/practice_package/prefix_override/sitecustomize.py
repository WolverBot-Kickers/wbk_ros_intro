import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wbk/wbk_ros_intro/ros2_ws_practice/install/practice_package'
