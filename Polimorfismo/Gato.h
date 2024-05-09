#ifndef HERENCIA_PRACTICA_GATO_H
#define HERENCIA_PRACTICA_GATO_H

#include <iostream>
#include "Animal.h"

class Gato : public Animal{
public:
    //CONSTRUCTORES
    Gato(); //Implicito
    Gato(const Gato &rhs); //Por Copia
    Gato(std::string Nombre, int Edad, float Peso, float Altura,
        std::string Raza, std::string Color); //Por Parametros
    ~Gato(); //Destructor

    //POLIMORFISMO
    void makeSound() override;

private:
    std::string Raza;
    std::string Color;
};


#endif //HERENCIA_PRACTICA_GATO_H
