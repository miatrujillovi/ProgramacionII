#include "Item.h"

//CONSTRUCTORES
Item::Item() {
    NombreI = "N/A";
    Tipo = "N/A";
}

Item::Item(std::string NombreI, std::string Tipo) {
    this -> NombreI = NombreI;
    this -> Tipo = Tipo;
}

Item::Item(const Item &other) : NombreI(other.NombreI), Tipo(other.Tipo){}

Item::~Item() {
    std::cout << "Se ha eliminado Item correctamente" << std::endl;
}

//METODOS
void Item::usarItem(std::string object) {
    std::cout << "Se ha utilizado " << object << std::endl;
}

//SOBRECARGA DE OPERADORES
bool Item::operator==(std::basic_string<char> otra) const {
    return true;
}

//GETTERS
std::string Item::getNombreI() const {
    return NombreI;
}
std::string Item::getTipo() const {
    return Tipo;
}

//SETTERS
void Item::setNombreI(std::string newNombreI) {
    this -> NombreI = newNombreI;
}
void Item::setTipo(std::string newTipo) {
    this -> Tipo = newTipo;
}