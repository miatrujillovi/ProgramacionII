#ifndef PROYECTO3ERPARCIAL_HABILIDAD_H
#define PROYECTO3ERPARCIAL_HABILIDAD_H
#include <iostream>

class Habilidad {
public:
    //CONSTRUCTORES
    Habilidad(); //Implicito
    Habilidad(int Costo); //Por Parametros
    virtual ~Habilidad(); //Destructor

    //METODOS
    virtual void usarHabilidad(int manaUsed, int Parameter);

private:
    int Costo;
};


#endif //PROYECTO3ERPARCIAL_HABILIDAD_H
