cmake_minimum_required(VERSION 3.28)

project(lab6-2)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    lab6-2
    src/main.cpp
    src/ball.cpp
)