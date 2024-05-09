#include "Coche.h"

// Constructor Implicito
Coche::Coche(){
    Marca = "N/A";
    Modelo = "N/A";
    Owner = "N/A";
    creationYear = 0;
    Kilometraje = 0;
}

// Constructor Explicito de Copia
Coche::Coche(const Coche &rhs){
    Marca = rhs.Marca;
    Modelo = rhs.Modelo;
    Owner = rhs.Owner;
    creationYear = rhs.creationYear;
    Kilometraje = rhs.Kilometraje;
}

// Constructor Explicito de Referencia
Coche::Coche(Coche &&rhs) noexcept{
    Marca = rhs.Marca;
    Modelo = rhs.Modelo;
    Owner = rhs.Owner;
    creationYear = rhs.creationYear;
    Kilometraje = rhs.Kilometraje;
}

// Constructor Explicito por Parámetros
Coche::Coche(std::string newMarca, std::string newModelo, std::string newOwner, int newCreationYear, int newKilometraje){
    this -> Marca = newMarca;
    this -> Modelo = newModelo;
    this -> Owner = newOwner;
    this -> creationYear = newCreationYear;
    this -> Kilometraje = newKilometraje;
}

// Sobrecarga de Operadores: Enseñarle a Coche el operador =
Coche &Coche::operator=(const Coche &rhs) {
    this -> Marca = rhs.Marca;
    this -> Modelo = rhs.Modelo;
    this -> Owner = rhs.Owner;
    this -> creationYear = rhs.creationYear;
    this -> Kilometraje = rhs.Kilometraje;
}
