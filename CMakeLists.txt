cmake_minimum_required(VERSION 4.0)
project(AirLineManagement)

set(CMAKE_CXX_STANDARD 14)

add_executable(AirLineManagement
        Main.cpp
        Planes.cpp
        Planes.h
        Flight.cpp
        Flight.h
        DataBase.cpp
        DataBase.h
)
