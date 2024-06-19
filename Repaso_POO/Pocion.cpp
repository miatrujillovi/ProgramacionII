#include "Pocion.h"

//CONSTRUCTORES
Pocion::Pocion() {

}

Pocion::~Pocion() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//METODOS
void Pocion::Usar() {
    std::cout << "Has utilizado una Pocion" << std::endl;
}