#include "Persona.h"

//CONSTRUCTORES
Persona::Persona() {
    Nombre = "N/A";
    Edad = 0;
    Altura = 0;
    Peso = 0;
    TipoSangre = "N/A";
};

Persona::Persona(const Persona &rhs) {
    Nombre = rhs.Nombre;
    Edad = rhs.Edad;
    Altura = rhs.Altura;
    Peso = rhs.Peso;
    TipoSangre = rhs.TipoSangre;
}

Persona::Persona(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre) {
    this -> Nombre = Nombre;
    this -> Edad = Edad;
    this -> Altura = Altura;
    this -> Peso = Peso;
    this -> TipoSangre = TipoSangre;
}

//Getters
std::string Persona::getNombre() const{
    return Nombre;
}
int Persona::getEdad() const{
    return Edad;
}
int Persona::getAltura() const{
    return Altura;
}
int Persona::getPeso() const{
    return Peso;
}
std::string Persona::getTipoSangre() const{
    return TipoSangre;
}

//Setters
void Persona::setNombre(std::string newNombre){
    this->Nombre = newNombre;
}
void Persona::setEdad(int newEdad){
    this->Edad = newEdad;
}
void Persona::setAltura(int newAltura){
    this->Altura = newAltura;
}
void Persona::setPeso(int newPeso){
    this->Peso = newPeso;
}
void Persona::setTipoSangre(std::string newTipoSangre){
    this->TipoSangre = newTipoSangre;
}

