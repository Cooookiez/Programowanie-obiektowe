cmake_minimum_required(VERSION 3.1)
set (CMAKE_CXX_STANDARD 17)


project(Pierwszy)
add_executable(${PROJECT_NAME} "main.cpp" "kwadratowa.cpp" "kwadratowa.h")

add_executable(test1 "tests/test1.cpp" "kwadratowa.cpp")

enable_testing()
find_package(GTest REQUIRED)


target_link_libraries(test1 GTest::GTest)
