#ifndef REPASO_POO_POCION_H
#define REPASO_POO_POCION_H
#include <iostream>
#include "Item.h"

class Pocion : public Item {
public:
    //CONSTRUCTORES
    Pocion(); //Implicito
    ~Pocion(); //Destructor

    //METODOS
    void Usar() override;

private:

};


#endif //REPASO_POO_POCION_H
