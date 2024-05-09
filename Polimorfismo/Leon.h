#ifndef HERENCIA_PRACTICA_LEON_H
#define HERENCIA_PRACTICA_LEON_H

#include <iostream>
#include "Animal.h"

class Leon : public Animal{
public:
    //CONSTRUCTORES
    Leon(); //Implicito
    Leon(const Leon &rhs); //Por Copia
    Leon(std::string Nombre, int Edad, float Peso, float Altura,
            bool Lider, int Familiares); //Por Parametros
    ~Leon(); //Destructor

    //POLIMORFISMO
    void makeSound() override;

private:
    bool Lider;
    int Familiares;
};


#endif //HERENCIA_PRACTICA_LEON_H
