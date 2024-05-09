#include <iostream>
#include <string>
#include "Coche.h"

int main() {

    Coche car1{}; //Implicito
    Coche car2("Tesla", "001", "Alberto", 2019, 2783); //Explicito por Parámetros
    Coche car3(car2); //Explicito por Copia

    return 0;
}
