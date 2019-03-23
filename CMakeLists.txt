cmake_minimum_required(VERSION 3.13)
project(Projekt_PPO)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cmake-build-debug)
include_directories(Headers)
include_directories(Sources)

add_executable(Projekt_PPO
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/Projekt_PPO.cbp
        cmake-build-debug/WheelMachine.txt
        Headers/Class_Base.hpp
        Headers/Global_Variables.hpp
        Headers/Menu_Methods.hpp
        Headers/Object_Methods.hpp
        Sources/Class_Base.cpp
        Sources/Global_Variables.cpp
        Sources/Menu_Methods.cpp
        Sources/Object_Methods.cpp
        CMakeLists.txt
        main.cpp
        README.md Sources/Class_First_Level.cpp Headers/Class_First_Level.hpp Sources/Class_Second_Level.cpp Headers/Class_Second_Level.hpp)
