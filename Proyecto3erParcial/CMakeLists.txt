cmake_minimum_required(VERSION 3.26)
project(Proyecto3erParcial)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto3erParcial main.cpp
        Entidad.h
        Entidad.cpp
        Jugador.h
        Jugador.cpp
        Enemigo.h
        Enemigo.cpp
        Item.h
        Item.cpp
        Inventario.h
        Inventario.cpp
        Habilidad.h
        Habilidad.cpp
        BolaDeFuego.h
        BolaDeFuego.cpp
        Curar.h
        Curar.cpp
        Personaje.h
        Personaje.cpp)
