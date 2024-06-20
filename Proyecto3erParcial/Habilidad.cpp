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
void Habilidad::usarHabilidad(int manaUsed, int Parameter) {
    std::cout << "Se ha utilizado una Habilidad" << std::endl;
}