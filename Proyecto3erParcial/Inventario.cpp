#include "Inventario.h"

//CONSTRUCTORES
Inventario::Inventario() {}

Inventario::~Inventario() {
    std::cout << "Se ha eliminado Inventario correctamente" << std::endl;
}

//METODOS
void Inventario::agregarItem(Item* object) {
    items.push_back(object);
    std::cout << "Se ha agregado " << object->getNombreI() << " exitosamente" << std::endl;
}

void Inventario::eliminarItem(std::string object) {
    auto IT = std::find_if(items.begin(), items.end(), [&object](Item* item) {
        return item->getNombreI() == object;
    });

    if (IT != items.end()) {
        std::cout << "Se ha eliminado " << (*IT)->getNombreI() << " exitosamente" << std::endl;
        items.erase(IT);
    } else {
        std::cout << "No se ha encontrado su item" << std::endl;
    }
}

void Inventario::mostrarItems(){
    std::cout << "Estos son sus Items actuales: " << std::endl;
    for(int i = 0; i < items.size(); i++){
        auto IT = items.at(i)->getNombreI();
        std::cout << IT << std::endl;
    }
}