#ifndef PROYECTO3ERPARCIAL_INVENTARIO_H
#define PROYECTO3ERPARCIAL_INVENTARIO_H
#include <iostream>
#include "Item.h"
#include <vector>

class Inventario : public Item{
public:
    //CONSTRUCTORES
    Inventario(); //Implicito
    ~Inventario(); //Destructor

    //METODOS
    void agregarItem(const Item& object);
    void eliminarItem(std::string object);
    void mostrarItems() const;

private:
    std::vector<Item> item;
};


#endif //PROYECTO3ERPARCIAL_INVENTARIO_H