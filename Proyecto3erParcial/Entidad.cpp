#include "Entidad.h"

//CONSTRUCTORES
Entidad::Entidad() {
    Nombre = "N/A";
    Salud = 100;
}

Entidad::Entidad(std::string Nombre, int Salud) {
    this -> Nombre = Nombre;
    this -> Salud = Salud;
}

Entidad::~Entidad() {
    std::cout << "Se ha eliminado Entidad correctamente" << std::endl;
}

//METODOS
void Entidad::mostrarInformacion() {
    std::cout << "Tu nombre es " << Nombre << std::endl;
    std::cout << "Tu salud es " << Salud << std::endl;
}

//GETTERS
std::string Entidad::getNombre() const {
    return Nombre;
}
int Entidad::getSalud() const {
    return Salud;
}

//SETTERS
void Entidad::setNombre(std::string newNombre) {
    this -> Nombre = newNombre;
}
void Entidad::setSalud(int newSalud) {
    this -> Salud = newSalud;
}