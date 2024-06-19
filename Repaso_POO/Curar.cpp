#include "Curar.h"

//CONSTRUCTORES
Curar::Curar() {
    VidaMas = 2;
}

Curar::Curar(int VidaMas) {
    this -> VidaMas = VidaMas;
}

Curar::~Curar() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//METODOS
void Curar::Usar() {
    std::cout << "Has realizado una Curacion" << std::endl;
}