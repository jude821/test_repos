# CMake generated Testfile for 
# Source directory: /home/ubuntu/robot_ws/src/ros2_controllers/joint_state_broadcaster
# Build directory: /home/ubuntu/robot_ws/src/build/joint_state_broadcaster
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_load_joint_state_broadcaster "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_results/joint_state_broadcaster/test_load_joint_state_broadcaster.gtest.xml" "--package-name" "joint_state_broadcaster" "--output-file" "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/ament_cmake_gmock/test_load_joint_state_broadcaster.txt" "--command" "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_load_joint_state_broadcaster" "--gtest_output=xml:/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_results/joint_state_broadcaster/test_load_joint_state_broadcaster.gtest.xml")
set_tests_properties(test_load_joint_state_broadcaster PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_load_joint_state_broadcaster" TIMEOUT "60" WORKING_DIRECTORY "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/ubuntu/robot_ws/src/ros2_controllers/joint_state_broadcaster/CMakeLists.txt;60;ament_add_gmock;/home/ubuntu/robot_ws/src/ros2_controllers/joint_state_broadcaster/CMakeLists.txt;0;")
add_test(test_joint_state_broadcaster "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_results/joint_state_broadcaster/test_joint_state_broadcaster.gtest.xml" "--package-name" "joint_state_broadcaster" "--output-file" "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/ament_cmake_gmock/test_joint_state_broadcaster.txt" "--command" "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_joint_state_broadcaster" "--gtest_output=xml:/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_results/joint_state_broadcaster/test_joint_state_broadcaster.gtest.xml")
set_tests_properties(test_joint_state_broadcaster PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster/test_joint_state_broadcaster" TIMEOUT "60" WORKING_DIRECTORY "/home/ubuntu/robot_ws/src/build/joint_state_broadcaster" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/ubuntu/robot_ws/src/ros2_controllers/joint_state_broadcaster/CMakeLists.txt;71;ament_add_gmock;/home/ubuntu/robot_ws/src/ros2_controllers/joint_state_broadcaster/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
