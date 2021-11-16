cmake_minimum_required(VERSION 3.20)
project(cwiczenie6)

set(CMAKE_CXX_STANDARD 23)

add_executable(cwiczenie6 src/main.cpp include/Node.h src/Node.cpp include/Vector.h include/ComplexNumber.h src/ComplexNumber.cpp)
