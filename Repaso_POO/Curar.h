#ifndef REPASO_POO_CURAR_H
#define REPASO_POO_CURAR_H
#include <iostream>
#include "Habilidad.h"

class Curar : public Habilidad{
public:
    //CONSTRUCTORES
    Curar(); //Implicito
    Curar(int VidaMas); //Por Parametros
    ~Curar(); //Destructor

    //METODOS
    void Usar() override;

private:
    int VidaMas;
};


#endif //REPASO_POO_CURAR_H
