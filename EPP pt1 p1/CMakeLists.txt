cmake_minimum_required(VERSION 3.13)
project(EPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(EPP main.cpp IntegerList.h IntListNode.h IntegerList.cpp)