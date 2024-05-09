#ifndef HERENCIA_PRACTICA_ANIMAL_H
#define HERENCIA_PRACTICA_ANIMAL_H

#include <iostream>

class Animal {
public:
    //CONSTRUCTORES
    Animal(); //Implicito
    Animal(const Animal &rhs); //Por Copia
    Animal(std::string Nombre, int Edad, float Peso, float Altura); //Por Parametros
    virtual ~Animal(); //Destructor

    //POLIMORFISMO
    virtual void makeSound();

private:
    std::string Nombre;
    int Edad;
    float Peso;
    float Altura;
};


#endif //HERENCIA_PRACTICA_ANIMAL_H
