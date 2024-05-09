#include "Cerdo.h"

//CONSTRUCTORES
Cerdo::Cerdo() : Animal(){
    Suciedad = false;
    Estadia = 0;
}

Cerdo::Cerdo(const Cerdo &rhs) : Animal(){
    Suciedad = rhs.Suciedad;
    Estadia = rhs.Estadia;
}

Cerdo::Cerdo(std::string Nombre, int Edad, float Peso, float Altura,
bool Suciedad, int Estadia) : Animal(Nombre, Edad, Peso, Altura){
    this -> Suciedad = Suciedad;
    this -> Estadia = Estadia;
}

Cerdo::~Cerdo(){
    //Destructor
}

//POLIMORFISMO
void Cerdo::makeSound() {
    std::cout << "Oink" << std::endl;
}
