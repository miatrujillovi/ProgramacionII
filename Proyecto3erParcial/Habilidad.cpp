#include "Habilidad.h"

//CONSTRUCTORES
Habilidad::Habilidad() {
    Costo = 2;
}

Habilidad::Habilidad(int Costo) {
    this -> Costo = Costo;
}

Habilidad::~Habilidad() {
    std::cout << "Se ha eliminado Habilidad correctamente" << std::endl;
}

//METODOS
void Habilidad::usarHabilidad() {
    std::cout << "Se ha utilizado una Habilidad" << std::endl;
}

//GETTERS
int Habilidad::getCosto() const {
    return Costo;
}

//SETTERS
void Habilidad::setCosto(int newCosto) {
    this -> Costo = newCosto;
}