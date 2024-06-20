#include "Personaje.h"

//CONSTRUCTORES
Personaje::Personaje() {}

Personaje::Personaje(int DamageJ, int Mana, std::string Nombre, int Salud) : Jugador(DamageJ, Mana, Nombre, Salud) {}

Personaje::~Personaje() {
    std::cout << "Se ha eliminado Personaje correctamente" << std::endl;
}

//METODOS
void Personaje::mostrarInformacion() {
    Jugador::mostrarInformacion();
}

