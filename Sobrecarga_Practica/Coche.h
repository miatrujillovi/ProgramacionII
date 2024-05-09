#ifndef PROGRAMACIONII_COCHE_H
#define PROGRAMACIONII_COCHE_H

#include <iostream>
#include <string>

class Coche{
public:
    // Coche() = default;
    Coche(); // Constructor Implicito
    Coche(const Coche &rhs); // Constructor Explicito por Copia
    Coche(Coche &&rhs) noexcept; // Constructor Explicito por Referencia
    Coche(std::string Marca, std::string Modelo, std::string Owner, int creationYear, int Kilometraje); // Constructor Explicito por Parámetros
    ~Coche() = default; // Destructor

    //Sobrecarga de Operadores: Enseñarle a Coche el Operador =
    Coche &operator= (const Coche &rhs);

private:
    std::string Marca;
    std::string Modelo;
    int creationYear;
    int Kilometraje;
    std::string Owner;
};

#endif //PROGRAMACIONII_COCHE_H
