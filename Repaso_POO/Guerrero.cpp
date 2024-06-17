#include "Guerrero.h"

//CONSTRUCTORES
Guerrero::Guerrero() {
    Arma = "N/A";
    Armadura = true;
}

Guerrero::Guerrero(std::string Nombre, float Altura, float Peso, int NivelPersonaje,
                   std::string Arma, bool Armadura) : Personaje(Nombre, Altura, Peso, NivelPersonaje){
    this -> Arma = Arma;
    this -> Armadura = Armadura;
}

Guerrero::~Guerrero() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//GETTERS
std::string Guerrero::getArma() const {
    return Arma;
}
bool Guerrero::getArmadura() const {
    return Armadura;
}

//SETTERS
void Guerrero::setArma(std::string newArma) {
    this -> Arma = newArma;
}
void Guerrero::setArmadura(bool newArmadura) {
    this -> Armadura = newArmadura;
}

//METODOS
void Guerrero::Atacar(){
    std::cout << "Has atacado con " << Arma << std::endl;
}