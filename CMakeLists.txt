cmake_minimum_required(VERSION 3.7)
project(CompCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Token.cpp Token.h)
add_executable(CompCpp ${SOURCE_FILES})