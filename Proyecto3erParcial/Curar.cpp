#include "Curar.h"

//CONSTRUCTORES
Curar::Curar() {}

Curar::~Curar() {
    std::cout << "Se ha eliminado Curar correctamente" << std::endl;
}

//METODOS
void Curar::usarHabilidad(int manaUsed, int Parameter) {
    this->jugador->setMana(this->jugador->getMana() - manaUsed);
    this->setSalud(this->getSalud()+Parameter);
    std::cout << "!Te has curado!" << std::endl;
}