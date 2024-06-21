#ifndef PROYECTO3ERPARCIAL_ITEM_H
#define PROYECTO3ERPARCIAL_ITEM_H
#include <iostream>
#include <vector>
#include <string>

class Item {
public:
    //CONSTRUCTORES
    Item(); //Implicito
    Item(std::string NombreI, std::string Tipo); //Por Parametros
    Item(const Item& other); //Por Copia
    virtual ~Item(); //Destructor

    //METODOS
    virtual void usarItem(std::string object);

    //SOBRECARGA DE OPERADORES
    bool operator==(std::basic_string<char> otra) const;

    //GETTERS Y SETTERS
    std::string getNombreI() const;
    void setNombreI(std::string newNombreI);
    std::string getTipo() const;
    void setTipo(std::string newTipo);

private:
    std::string NombreI;
    std::string Tipo;
};


#endif //PROYECTO3ERPARCIAL_ITEM_H
