#include "Enemigo.h"

//CONSTRUCTORES
Enemigo::Enemigo() {
    Vida = 0;
    Damage = 0;
}

Enemigo::Enemigo(int Vida, int Damage) {
    this -> Vida = Vida;
    this -> Damage = Damage;
}

Enemigo::~Enemigo() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//GETTERS
int Enemigo::getVida() const {
    return Vida;
}
int Enemigo::getDamage() const {
    return Damage;
}

//SETTERS
void Enemigo::setVida(int newVida) {
    this -> Vida = newVida;
}
void Enemigo::setDamage(int newDamage) {
    this -> Damage = newDamage;
}

//METODOS
void Enemigo::GettingHit(int damage){

}