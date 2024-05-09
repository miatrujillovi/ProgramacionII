#include <iostream>
#include "Animal.h"
#include "Cerdo.h"
#include "Elefante.h"
#include "Gato.h"
#include "Leon.h"
#include "Mono.h"
#include "Oso.h"
#include "Perro.h"

int main() {

    Animal *animal = new Animal();
    animal->makeSound();

    animal = new Cerdo();
    animal -> makeSound();

    //delete animal;

    animal = new Elefante();
    animal -> makeSound();

    animal = new Gato();
    animal -> makeSound();

    animal = new Leon();
    animal -> makeSound();

    animal = new Mono();
    animal -> makeSound();

    animal = new Oso();
    animal -> makeSound();

    animal = new Perro();
    animal -> makeSound();

    return 0;
}
