#include "BolaDeFuego.h"

//CONSTRUCTORES
BolaDeFuego::BolaDeFuego() {}

BolaDeFuego::~BolaDeFuego() {
    std::cout << "Se ha eliminado BolaDeFuego correctamente" << std::endl;
}

//METODOS
void BolaDeFuego::usarHabilidad(int manaUsed, int Parameter) {
    this->jugador->setMana(this->jugador->getMana() - manaUsed);
    this->setSalud(this->getSalud()-Parameter);
    std::cout << "!Haz lanzado una Bola de Fuego!" << std::endl;
}