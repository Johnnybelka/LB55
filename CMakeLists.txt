cmake_minimum_required(VERSION 3.13)
project(LB5)

set(CMAKE_CXX_STANDARD 14)

add_executable(LB5 main.cpp cmake-build-debug/cll.cpp cmake-build-debug/Complex.h cmake-build-debug/Vector.h)