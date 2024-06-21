#include "Inventario.h"

//CONSTRUCTORES
Inventario::Inventario() {}

Inventario::~Inventario() {
    std::cout << "Se ha eliminado Inventario correctamente" << std::endl;
}

//METODOS
void Inventario::agregarItem(const Item& object) {
    item.push_back(object);
    std::cout << "Se ha agregado " << object.getNombreI() << " exitosamente" << std::endl;
}

void Inventario::eliminarItem(std::string object) {
    auto IT = std::find(item.begin(), item.end(), object);
    if(IT != item.end()){
        item.erase(IT);
        std::cout << "Se ha eliminado " << IT->getNombreI() << " exitosamente" << std::endl;
    } else {
        std::cout << "No se ha encontrado su item" << std::endl;
    }
}

void Inventario::mostrarItems() const {
    std::cout << "Estos son sus Items actuales: " << std::endl;
    for(int i = 0; i < item.size(); i++){
        auto IT = item.at(i).getNombreI();
        std::cout << IT << std::endl;
    }
}