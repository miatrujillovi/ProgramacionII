#ifndef HERENCIA_PRACTICA_MONO_H
#define HERENCIA_PRACTICA_MONO_H

#include <iostream>
#include "Animal.h"

class Mono : public Animal{
public:
    //CONSTRUCTORES
    Mono(); //Implicito
    Mono(const Mono &rhs); //Por Copia
    Mono(std::string Nombre, int Edad, float Peso, float Altura,
    std::string Especie, bool Alimentado); //Por Parametros
    ~Mono(); //Destructor

    //POLIMORFISMO
    void makeSound() override;

private:
    std::string Especie;
    bool Alimentado;
};


#endif //HERENCIA_PRACTICA_MONO_H
