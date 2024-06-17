#include "Personaje.h"

//CONSTRUCTORES
Personaje::Personaje() {
    Nombre = "N/A";
    Altura = 0;
    Peso = 0;
    NivelPersonaje = 1;
}

Personaje::Personaje(std::string Nombre, float Altura, float Peso, int NivelPersonaje) {
    this -> Nombre = Nombre;
    this -> Altura = Altura;
    this -> Peso = Peso;
    this -> NivelPersonaje = NivelPersonaje;
}

Personaje::~Personaje() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//GETTERS
std::string Personaje::getNombre() const{
    return Nombre;
}
float Personaje::getAltura() const {
    return Altura;
}
float Personaje::getPeso() const {
    return Peso;
}
int Personaje::getNivelPersonaje() const {
    return NivelPersonaje;
}

//SETTERS
void Personaje::setNombre(std::string newNombre) {
    this -> Nombre = newNombre;
}
void Personaje::setAltura(float newAltura) {
    this -> Altura = newAltura;
}
void Personaje::setPeso(float newPeso) {
    this -> Peso = newPeso;
}
void Personaje::setNivelPersonaje(int newNivelPersonaje) {
    this -> NivelPersonaje = newNivelPersonaje;
}

//METODOS
void Personaje::Atacar(){

}
