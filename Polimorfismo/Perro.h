#ifndef HERENCIA_PRACTICA_PERRO_H
#define HERENCIA_PRACTICA_PERRO_H

#include <iostream>
#include "Animal.h"

class Perro : public Animal{
public:
    //CONSTRUCTORES
    Perro(); //Implicito
    Perro(const Perro &rhs); //Por Copia
    Perro(std::string Nombre, int Edad, float Peso, float Altura,
            std::string Raza, std::string Color); //Por Parametros
    ~Perro(); //Destructor

    //POLIMORFISMO
    void makeSound() override;

private:
    std::string Raza;
    std::string Color;
};


#endif //HERENCIA_PRACTICA_PERRO_H
