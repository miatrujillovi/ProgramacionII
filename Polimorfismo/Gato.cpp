#include "Gato.h"

//CONSTRUCTORES
Gato::Gato() {
    Raza = "N/A";
    Color = "N/A";
}

Gato::Gato(const Gato &rhs) {
    Raza = rhs.Raza;
    Color = rhs.Color;
}

Gato::Gato(std::string Nombre, int Edad, float Peso, float Altura,
           std::string Raza, std::string Color) : Animal(Nombre, Edad, Peso, Altura){
    this -> Raza = Raza;
    this -> Color= Color;
}

Gato::~Gato() {
    //Destructor
}

//POLIMORFISMO
void Gato::makeSound() {
    std::cout << "Miau" << std::endl;
}
