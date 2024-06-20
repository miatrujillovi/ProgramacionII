#include "BolaDeFuego.h"

//CONSTRUCTORES
BolaDeFuego::BolaDeFuego() {}

BolaDeFuego::BolaDeFuego(int Costo) : Habilidad(Costo){}

BolaDeFuego::~BolaDeFuego() {
    std::cout << "Se ha eliminado BolaDeFuego correctamente" << std::endl;
}

//METODOS
void BolaDeFuego::usarHabilidad() {
    this->jugador->setMana(this->jugador->getMana() - getCosto());
    this->setSalud(this->getSalud()-10);
    std::cout << "!Haz lanzado una Bola de Fuego!" << std::endl;
}