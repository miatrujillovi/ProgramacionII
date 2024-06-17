#ifndef REPASO_POO_INVENTARIO_H
#define REPASO_POO_INVENTARIO_H
#include <iostream>
#include <vector>
#include <string>

class Inventario {
public:
    //CONSTRUCTORES
    Inventario(); //Implicito
    virtual ~Inventario(); //Destructor

    //METODOS
    void AddObject(std::string object);
    void DeleteObject(std::string object);
    void ViewInventory();

private:
    std::vector<std::string> Items;
};

#endif //REPASO_POO_INVENTARIO_H