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

Item::~Item() {
    std::cout << "Se ha eliminado Item correctamente" << std::endl;
}

//METODOS
void Item::usarItem(std::string object) {
    std::cout << "Se ha utilizado " << &object << std::endl;
}

//SOBRECARGA DE OPERADORES
bool Item::operator==(std::basic_string<char> otra) const {
    return true;
}