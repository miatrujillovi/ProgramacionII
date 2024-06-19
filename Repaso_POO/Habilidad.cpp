#include "Habilidad.h"

//CONSTRUCTORES
Habilidad::Habilidad() {

}

Habilidad::~Habilidad() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//METODOS
void Habilidad::Usar() {

}

bool Habilidad::operator==(const Habilidad &otra) const {
    return true;
}
