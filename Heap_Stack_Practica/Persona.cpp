#include "Persona.h"

//CONSTRUCTORES / DESTRUCTORES
Persona::Persona(std::string Nombre, int Edad) {
    this -> Nombre = Nombre;
    this -> Edad = Edad;
} //Por Parametros


Persona::~Persona() {
    std::cout << "¡Persona destruida!" << std::endl;
} //Destructor
