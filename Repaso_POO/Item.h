#ifndef REPASO_POO_ITEM_H
#define REPASO_POO_ITEM_H
#include <iostream>

class Item {
public:
    //CONSTRUCTORES
    Item(); //Implicito
    virtual ~Item(); //Destructor

    //METODOS
    virtual void Usar();

private:

};


#endif //REPASO_POO_ITEM_H
