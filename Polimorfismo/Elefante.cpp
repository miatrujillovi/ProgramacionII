#include "Elefante.h"

//CONSTRUCTORES
Elefante::Elefante() {
    Color = "N/A";
    Patas = 0;
}

Elefante::Elefante(const Elefante &rhs) {
    Color = rhs.Color;
    Patas = rhs.Patas;
}

Elefante::Elefante(std::string Nombre, int Edad, float Peso, float Altura,
                   std::string Color, int Patas) : Animal(Nombre, Edad, Peso, Altura){
    this -> Color = Color;
    this -> Patas = Patas;
}

Elefante::~Elefante() {
    //Destructor
}

//POLIMORFISMO
void Elefante::makeSound() {
    std::cout << "Bruu" << std::endl;
}