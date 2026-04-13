cmake_minimum_required(VERSION 4.2)
project(code_gen3_c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(code_gen3_c
        Koszyk.cpp
        Koszyk.h
        Pozycja.cpp
        Pozycja.h
        PrzelicznikCeny.cpp
        PrzelicznikCeny.h
        main.cpp)
