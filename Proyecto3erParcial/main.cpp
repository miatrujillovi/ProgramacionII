#include "Personaje.h"
#include "Enemigo.h"
#include <iostream>

int main() {
    auto* jugador = new Personaje(2, 100, "Heroe", 100);
    auto* enemigo = new Enemigo(2, 5, "Orco", 100);
    auto* boladefuego = new BolaDeFuego(5);
    auto* curar = new Curar(10);

    auto* espada = new Item("Espada", "Arma");
    auto* escudo = new Item("Escudo", "Defensa");

    std::cout << "\n--- Usar Bola de Fuego ---" << std::endl;
    boladefuego->usarHabilidad();
    delete boladefuego;

    std::cout << "\n--- Usar Curacion ---" << std::endl;
    curar->usarHabilidad();
    delete curar;

    std::cout << "\n--- Información del Jugador ---" << std::endl;
    jugador->mostrarInformacion();

    std::cout << "\n--- Información del Enemigo ---" << std::endl;
    enemigo->mostrarInformacion();
    delete enemigo;

    std::cout << "\n--- Agregar Item ---" << std::endl;
    jugador->agregarItem(*espada);
    jugador->agregarItem(*escudo);

    std::cout << "\n--- Usar Item ---" << std::endl;
    jugador->usarItem("Espada");

    std::cout << "\n--- Ver Inventario ---" << std::endl;
    jugador->mostrarItems();

    std::cout << "\n--- Eliminar Item ---" << std::endl;
    jugador->eliminarItem("Escudo");

    delete jugador;
    delete escudo;
    delete espada;

    return 0;
}