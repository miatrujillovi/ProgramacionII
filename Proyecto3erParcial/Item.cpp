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
void Item::usarItem() {
    std::cout << "Se ha utilizado un Item" << std::endl;
}

//SOBRECARGA DE OPERADORES
bool Item::operator==(const Item &otra) const {
    return true;
}