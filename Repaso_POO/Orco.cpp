#include "Orco.h"

//CONSTRUCTORES
Orco::Orco() {
    Color = "N/A";
    Arma = false;
}

Orco::Orco(int Vida, int Damage,
           std::string Color, bool Arma) : Enemigo(Vida, Damage){
    this -> Color = Color;
    this -> Arma = Arma;
}

Orco::~Orco() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//GETTERS
std::string Orco::getColor() const {
    return Color;
}
bool Orco::getArma() const {
    return Arma;
}

//SETTERS
void Orco::setColor(std::string newColor) {
    this -> Color = newColor;
}
void Orco::setArma(bool newArma) {
    this -> Arma = newArma;
}

//METODOS
void Orco::GettingHit(int damage) {
    this->setVida(this->getVida()-damage);
}