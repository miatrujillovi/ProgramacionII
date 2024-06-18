cmake_minimum_required(VERSION 3.26)
project(Repaso_POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Repaso_POO main.cpp
        Personaje.h
        Personaje.cpp
        Mago.h
        Mago.cpp
        Guerrero.h
        Guerrero.cpp
        Enemigo.h
        Enemigo.cpp
        Goblin.h
        Goblin.cpp
        Orco.h
        Orco.cpp
        Inventario.h
        Inventario.cpp)
