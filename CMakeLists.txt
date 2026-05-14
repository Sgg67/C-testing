cmake_minimum_required(VERSION 3.10)
project(testProject)

add_executable(test_runner test/test_math.cpp src/math.c)
target_link_libraries(test_runner gtest gtest_main pthread)
