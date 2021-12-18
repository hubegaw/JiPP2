cmake_minimum_required(VERSION 3.20)
project(Planer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Planer src/main.cpp include/Task.h include/WeekPlaner.h src/Task.cpp src/WeekPlaner.cpp)
