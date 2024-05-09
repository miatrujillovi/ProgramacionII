#include "Mono.h"

//CONSTRUCTORES
Mono::Mono() {
    Especie = "N/A";
    Alimentado = false;
}

Mono::Mono(const Mono &rhs) {
    Especie = rhs.Especie;
    Alimentado = rhs.Alimentado;
}

Mono::Mono(std::string Nombre, int Edad, float Peso, float Altura,
           std::string Especie, bool Alimentado) : Animal(Nombre, Edad, Peso, Altura){
    this -> Especie = Especie;
    this -> Alimentado = Alimentado;
}

Mono::~Mono() {
    //Destructor
}

//POLIMORFISMO
void Mono::makeSound() {
    std::cout << "Uh-Uh-Ah-Ah" << std::endl;
}
