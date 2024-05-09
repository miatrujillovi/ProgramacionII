#include "Oso.h"

//CONSTRUCTORES
Oso::Oso() {
    Fuerza = 0;
    Especie = "N/A";
}

Oso::Oso(const Oso &rhs) {
    Fuerza = rhs.Fuerza;
    Especie = rhs.Especie;
}

Oso::Oso(std::string Nombre, int Edad, float Peso, float Altura,
         float Fuerza, std::string Especie) :  Animal(Nombre, Edad, Peso, Altura){
    this -> Fuerza = Fuerza;
    this -> Especie = Especie;
}

Oso::~Oso() {
    //Destructor
}

//POLIMORFISMO
void Oso::makeSound() {
    std::cout << "Grrrr" << std::endl;
}