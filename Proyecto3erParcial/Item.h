#ifndef PROYECTO3ERPARCIAL_ITEM_H
#define PROYECTO3ERPARCIAL_ITEM_H
#include <iostream>

class Item {
public:
    //CONSTRUCTORES
    Item(); //Implicito
    Item(std::string NombreI, std::string Tipo); //Por Parametros
    virtual ~Item(); //Destructor

    //METODOS
    virtual void usarItem();

    //SOBRECARGA DE OPERADORES
    bool operator==(const Item& otra) const;

private:
    std::string NombreI;
    std::string Tipo;
};


#endif //PROYECTO3ERPARCIAL_ITEM_H
