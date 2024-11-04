cmake_minimum_required(VERSION 3.29)
project(Propuesta_Examen)

set(CMAKE_CXX_STANDARD 14)

include_directories(pitagoricos)

add_executable(Propuesta_Examen
    pitagoricos/pitagoricos.cpp
    pitagoricos/pitagoricos.h
    main.cpp)
