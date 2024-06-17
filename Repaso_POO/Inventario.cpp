#include "Inventario.h"

//CONSTRUCTORES
Inventario::Inventario() {

}

Inventario::~Inventario() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

// METODOS
void Inventario::AddObject(std::string object) {
    Items.push_back(object);
    std::cout << "Se ha guardado " << object << " exitosamente" << std::endl;
}

void Inventario::DeleteObject(std::string object) {
    auto IT = std::find(Items.begin(), Items.end(), object);
    if(IT != Items.end()){
        Items.erase(IT);
        std::cout << "Se ha eliminado " << object << " exitosamente" << std::endl;
    } else {
        std::cout << "No se ha encontrado " << object << " en el inventario" << std::endl;
    }
}

void Inventario::ViewInventory() {
    std::cout << "Estos son sus Items actuales: " << std::endl;
    for(int i = 0; i < Items.size(); i++){
        std::cout << Items.at(i) << std::endl;
    }
}