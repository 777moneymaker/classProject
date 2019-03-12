cmake_minimum_required(VERSION 3.13)
project(Projekt_PPO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projekt_PPO main.cpp Headers/Class.h Headers/MainFunctions.h Sources/MainFunctions.cpp)
include_directories(.)