cmake_minimum_required(VERSION 3.13)
project(Projekt_PPO)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++")

add_executable(Projekt_PPO main.cpp Headers/Class.hpp Headers/MenuFunctions.hpp Sources/MenuFunctions.cpp Sources/ClassMethods.cpp Headers/GlobalVariables.hpp Headers/ObjectFunctions.hpp Sources/ObjectFunctions.cpp)
include_directories(.)