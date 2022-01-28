cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled src/main.cpp include/Plan.h include/Task.h include/Planer.h src/Task.cpp src/Plan.cpp include/Day.h src/Day.cpp src/fileManagement.cpp include/PlanerExceptions.h)
