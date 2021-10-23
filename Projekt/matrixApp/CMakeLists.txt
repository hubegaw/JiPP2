cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 23)

include_directories(../matrixLib/include)

add_executable(matrixApp src/main.cpp src/functions.cpp include/functions.h)

target_link_libraries(matrixApp matrixLib)