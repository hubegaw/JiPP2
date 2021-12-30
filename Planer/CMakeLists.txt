cmake_minimum_required(VERSION 3.20)
project(Planer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Planer src/main.cpp include/Task.h include/Week.h src/Task.cpp src/Week.cpp include/WeekPlaner.h src/WeekPlaner.cpp include/Day.h src/Day.cpp)
