cmake_minimum_required(VERSION 3.17)
project(gradient_discent)

set(CMAKE_CXX_STANDARD 11)

add_executable(gradient_discent main.cpp src/problem.cpp include/problem.h  src/convex_functions/quadratic.cpp include/quadratic.h)