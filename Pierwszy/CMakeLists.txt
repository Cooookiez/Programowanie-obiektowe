cmake_minimum_required(VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)

project(Pierwszy)
add_executable(${PROJECT_NAME} "main.cpp")

add_executable(test1 "tests/test1.cpp")

target_link_libraries(test1 gtest)
