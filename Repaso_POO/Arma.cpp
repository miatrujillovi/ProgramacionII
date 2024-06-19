#include "Arma.h"

//CONSTRUCTORES
Arma::Arma() {

}

Arma::~Arma() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//METODOS
void Arma::Usar() {
    std::cout << "Has utilizado un Arma" << std::endl;
}