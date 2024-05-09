#ifndef HERENCIA_PRACTICA_OSO_H
#define HERENCIA_PRACTICA_OSO_H

#include <iostream>
#include "Animal.h"

class Oso : public Animal{
public:
    //CONSTRUCTORES
    Oso(); //Implicito
    Oso(const Oso &rhs); //Por Copia
    Oso(std::string Nombre, int Edad, float Peso, float Altura,
            float Fuerza, std::string Especie); //Por Parametros
    ~Oso(); //Destructor

    //POLIMORFISMO
    void makeSound() override;

private:
    float Fuerza;
    std::string Especie;
};


#endif //HERENCIA_PRACTICA_OSO_H
