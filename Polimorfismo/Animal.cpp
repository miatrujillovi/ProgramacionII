#include "Animal.h"

//CONSTRUCTORES
Animal::Animal() {
    Nombre = "N/A";
    Edad = 0;
    Peso = 0;
    Altura = 0;
}

Animal::Animal(const Animal &rhs) {
    Nombre = rhs.Nombre;
    Edad = rhs.Edad;
    Peso = rhs.Peso;
    Altura = rhs.Altura;
}

Animal::Animal(std::string Nombre, int Edad, float Peso, float Altura) {
    this -> Nombre = Nombre;
    this -> Edad = Edad;
    this -> Peso = Peso;
    this -> Altura = Altura;
}

Animal::~Animal() {
    //Destructor
}

//POLIMORFISMO
void Animal::makeSound() {
    std::cout << "Sonido de Animal" << std::endl;
}
