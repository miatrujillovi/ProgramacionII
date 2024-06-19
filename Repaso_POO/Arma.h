#ifndef REPASO_POO_ARMA_H
#define REPASO_POO_ARMA_H
#include <iostream>
#include "Item.h"

class Arma : public Item {
public:
    //CONSTRUCTORES
    Arma();
    ~Arma();

    //METODOS
    void Usar() override;

private:

};


#endif //REPASO_POO_ARMA_H
