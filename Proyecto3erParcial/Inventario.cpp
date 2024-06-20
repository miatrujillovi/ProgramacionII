#include "Inventario.h"

//CONSTRUCTORES
Inventario::Inventario() {}

Inventario::~Inventario() {
    std::cout << "Se ha eliminado Inventario correctamente" << std::endl;
}

//METODOS
void Inventario::agregarItem(Item object) {
    item->push_back(object);
}

void Inventario::eliminarItem(std::string object) {
    auto IT = std::find(item->begin(), item->end(), object);
    if(IT != item->end()){
        item->erase(IT);
    } else {
        std::cout << "No se ha encontrado su item" << std::endl;
    }
}

void Inventario::mostrarItems() {
    std::cout << "Estos son sus Items actuales: " << std::endl;
    for(int i = 0; i < item->size(); i++){
        std::cout << &item->at(i) << ", " << std::endl;
    }
}