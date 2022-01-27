cmake_minimum_required(VERSION 3.20)
project(lab10)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_executable(lab10 src/main.cpp include/szablony.h src/szablony.cpp include/file.h include/Stops.h include/myExceptions.h)
