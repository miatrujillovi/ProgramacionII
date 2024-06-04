#ifndef HEAP_STACK_PRACTICA_PERSONA_H
#define HEAP_STACK_PRACTICA_PERSONA_H

#include <iostream>

class Persona {
public:
    //CONSTRUCTORES / DESTRUCTORES
    Persona(std::string Nombre, int Edad); //Por copia
    Persona(const Persona &rhs): Nombre(new std::string(*rhs.Nombre)), Edad(new int(*rhs.Edad)){} //Por referencia usando punteros
    ~Persona(); //Destructor

private:
    std::string *Nombre;
    int *Edad;
};


#endif //HEAP_STACK_PRACTICA_PERSONA_H
