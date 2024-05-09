cmake_minimum_required(VERSION 3.26)
project(ProgramacionII)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProgramacionII main.cpp
        Coche.h
        Coche.cpp
        FloatCell.cpp
        FloatCell.h
        IntCell.h
        IntCell.cpp
        BoolCell.cpp
        BoolCell.h
        DoubleCell.cpp
        DoubleCell.h
        CharCell.cpp
        CharCell.h
)
