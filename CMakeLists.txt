cmake_minimum_required(VERSION 3.27)
project(cpp_lab9)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_lab9 main.cpp
        AbstractFilter.h
        Filters.h)
