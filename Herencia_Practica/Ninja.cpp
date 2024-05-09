#include <iostream>
#include <string>
#include "Ninja.h"

//CONSTRUCTORES
Ninja::Ninja(): Persona() {
    Elemento = "N/A";
    Arma = "N/A";
    Maestro = "N/A";
};

Ninja::Ninja(const Ninja &rhs) {
    Elemento = rhs.Elemento;
    Arma = rhs.Arma;
    Maestro = rhs.Maestro;
}

Ninja::Ninja(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre, std::string newElemento, std::string newArma, std::string newMaestro) : Persona(Nombre, Edad, Altura, Peso, TipoSangre) {
    this -> Elemento = newElemento;
    this -> Arma = newArma;
    this -> Maestro = newMaestro;
};

//Getters
std::string Ninja::getElemento() const{
    return Elemento;
}
std::string Ninja::getArma() const{
    return Arma;
}
std::string Ninja::getMaestro() const{
    return Maestro;
}

//Setters
void Ninja::setElemento(std::string newElemento){
    this->Elemento = newElemento;
}
void Ninja::setArma(std::string newArma){
    this->Arma = newArma;
}
void Ninja::setMaestro(std::string newMaestro){
    this->Maestro = newMaestro;
}


