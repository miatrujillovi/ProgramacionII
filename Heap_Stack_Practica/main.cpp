#include <iostream>
#include <memory>
#include "Persona.h"

int main() {

    //Persona Alumno1("Jorge",20);

    /*Persona *Alumno2 = new Persona("Jorge", 20);
    delete Alumno2;*/

    // Usando Punteros Inteligentes para inicializar y borrar los datos de heap
    std::unique_ptr<Persona> Alumno3 = std::make_unique<Persona>("Jorge", 20);

    return 0;
}
