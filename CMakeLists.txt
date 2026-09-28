cmake_minimum_required(VERSION 4.2)
project(ZOO)

set(CMAKE_CXX_STANDARD 20)

add_executable(ZOO main.cpp
        Animal.h
        Animal.cpp
        Zoo.h
        Area.h
        Area.cpp)
