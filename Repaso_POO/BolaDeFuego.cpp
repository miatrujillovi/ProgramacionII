#include "BolaDeFuego.h"

//CONSTRUCTORES
BolaDeFuego::BolaDeFuego() {
    Damage = 5;
}

BolaDeFuego::BolaDeFuego(int Damage) {
    this -> Damage = Damage;
}

BolaDeFuego::~BolaDeFuego() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//METODOS
void BolaDeFuego::Usar() {
    std::cout << "Has usado Bola de Fuego" << std::endl;
}