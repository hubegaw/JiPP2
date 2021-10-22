cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_library(matrixLib STATIC src/matrixLib.cpp include/MatrixLib.h)