#ifndef HERENCIA_PRACTICA_CERDO_H
#define HERENCIA_PRACTICA_CERDO_H

#include <iostream>
#include "Animal.h"

class Cerdo : public Animal{
public:
    //CONSTRUCTORES
    Cerdo(); //Implicito
    Cerdo(const Cerdo &rhs); //Por Copia
    Cerdo(std::string Nombre, int Edad, float Peso, float Altura,
            bool Suciedad, int Estadia); //Por Parametros
    ~Cerdo(); //Destructor

    //POLIMORFISMO
    void makeSound() override;

private:
    bool Suciedad;
    int Estadia;
};


#endif //HERENCIA_PRACTICA_CERDO_H
