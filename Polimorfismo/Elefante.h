#ifndef HERENCIA_PRACTICA_ELEFANTE_H
#define HERENCIA_PRACTICA_ELEFANTE_H

#include <iostream>
#include "Animal.h"

class Elefante : public Animal{
public:
    //CONSTRUCTORES
    Elefante(); //Implicito
    Elefante(const Elefante &rhs); //Por Copia
    Elefante(std::string Nombre, int Edad, float Peso, float Altura,
            std::string Color, int Patas); //Por Parametros
    ~Elefante(); //Destructor

    //POLIMORFISMO
    void makeSound() override;

private:
    std::string Color;
    int Patas;
};


#endif //HERENCIA_PRACTICA_ELEFANTE_H
