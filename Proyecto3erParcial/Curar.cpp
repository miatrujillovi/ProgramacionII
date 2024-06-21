#include "Curar.h"

//CONSTRUCTORES
Curar::Curar() {}

Curar::Curar(int Costo) : Habilidad(Costo){}

Curar::~Curar() {
    std::cout << "Se ha eliminado Curar correctamente" << std::endl;
}

//METODOS
void Curar::usarHabilidad() {
    this->jugador.setMana(this->jugador.getMana() - getCosto());
    this->setSalud(this->getSalud()+50);
    std::cout << "!Te has curado!" << std::endl;
}