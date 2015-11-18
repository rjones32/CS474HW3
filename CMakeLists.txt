cmake_minimum_required(VERSION 3.3)
project(CS474HW3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")

set(SOURCE_FILES main.cpp llist.cpp llist.h node.cpp node.h paintingWrapper.cpp paintingWrapper.h painting.cpp painting.h)
add_executable(CS474HW3 ${SOURCE_FILES})