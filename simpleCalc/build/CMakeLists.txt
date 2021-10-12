cmake_minimum_required(VERSION 3.20)
project(simpleCalc)

set(CMAKE_CXX_STANDARD 23)

add_executable(simpleCalc ../src/main.cpp ../include/calc.h ../src/calc.cpp)