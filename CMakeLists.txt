cmake_minimum_required(VERSION 3.13)
project(Projekt_PPO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projekt_PPO main.cpp Headers/Class.h Headers/MenuFunctions.h Sources/MenuFunctions.cpp Sources/ClassMethods.cpp Headers/GlobalVariables.h Headers/ObjectFunctions.h Sources/ObjectFunctions.cpp)
include_directories(.)