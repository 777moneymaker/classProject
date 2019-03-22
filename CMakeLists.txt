cmake_minimum_required(VERSION 3.13)
project(Projekt_PPO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projekt_PPO main.cpp Headers/Class.hpp Headers/Menu.hpp Sources/Menu.cpp Sources/Class.cpp Headers/GVariables.hpp Headers/Objects.hpp Sources/Objects.cpp Sources/GVariables.cpp)
include_directories(.)