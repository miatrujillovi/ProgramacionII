#include "Goblin.h"

//CONSTRUCTORES
Goblin::Goblin() {
    Mordida = "N/A";
    AtaqueSalto = "N/A";
}

Goblin::Goblin(int Vida, int Damage,
               bool Mordida, bool AtaqueSalto) : Enemigo(Vida, Damage) {
    this -> Mordida = Mordida;
    this -> AtaqueSalto = AtaqueSalto;
}

Goblin::~Goblin() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//GETTERS
bool Goblin::getMordida() const {
    return Mordida;
}
bool Goblin::getAtaqueSalto() const {
    return AtaqueSalto;
}

//SETTERS
void Goblin::setMordida(bool newMordida) {
    this -> Mordida = newMordida;
}
void Goblin::setAtaqueSalto(bool newAtaqueSalto) {
    this -> AtaqueSalto = newAtaqueSalto;
}

//METODOS
void Goblin::GettingHit(int damage) {
    this->setVida(this->getVida()-damage);
}