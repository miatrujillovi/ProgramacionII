#include "Perro.h"

//CONSTRUCTORES
Perro::Perro() {
    Raza = "N/A";
    Color = "N/A";
}

Perro::Perro(const Perro &rhs) {
    Raza = rhs.Raza;
    Color = rhs.Color;
}

Perro::Perro(std::string Nombre, int Edad, float Peso, float Altura,
           std::string Raza, std::string Color) : Animal(Nombre, Edad, Peso, Altura){
    this -> Raza = Raza;
    this -> Color= Color;
}

Perro::~Perro() {
    //Destructor
}

//POLIMORFISMO
void Perro::makeSound() {
    std::cout << "Guaf" << std::endl;
}