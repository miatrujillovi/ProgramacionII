#include "Leon.h"

//CONSTRUCTORES
Leon::Leon() {
    Lider = false;
    Familiares = 0;
}

Leon::Leon(const Leon &rhs) {
    Lider = rhs.Lider;
    Familiares = rhs.Familiares;
}

Leon::Leon(std::string Nombre, int Edad, float Peso, float Altura,
           bool Lider, int Familiares) : Animal(Nombre, Edad, Peso, Altura){
    this -> Lider = Lider;
    this -> Familiares = Familiares;
}

Leon::~Leon() {
    //Destructor
}

//POLIMORFISMO
void Leon::makeSound() {
    std::cout << "Groar" << std::endl;
}