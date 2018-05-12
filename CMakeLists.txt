cmake_minimum_required(VERSION 2.8)
project(gtest_example)

add_executable(main src/main.cpp)


add_subdirectory(lib/gtest)
add_subdirectory(test)

