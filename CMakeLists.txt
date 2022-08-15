cmake_minimum_required(VERSION 3.23)
project(01_exercicio)

set(CMAKE_CXX_STANDARD 23)

add_executable(01_exercicio main.cpp user.h user.cpp UserImpl.cpp userList.cpp userList.h userUtil.cpp userUtil.h)
