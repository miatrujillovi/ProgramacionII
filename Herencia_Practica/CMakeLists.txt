cmake_minimum_required(VERSION 3.26)
project(Herencia_Practica)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Herencia_Practica
        Ninja.cpp
        Ninja.h
        Persona.cpp
        Persona.h
        Charmix.h
        Charmix.cpp
        Enchantix.cpp
        Enchantix.h
        Believix.h
        Believix.cpp
        Harmonix.h
        Harmonix.cpp
        Sephiroth.cpp
        Sephiroth.h
        VestidoAstral.h
        VestidoAstral.cpp
        Espiritu.cpp
        Espiritu.h
        main.cpp)
