#ifndef REPASO_POO_BOLADEFUEGO_H
#define REPASO_POO_BOLADEFUEGO_H
#include <iostream>
#include "Habilidad.h"

class BolaDeFuego: public Habilidad {
public:
    //CONSTRUCTORES
    BolaDeFuego(); //Implicito
    BolaDeFuego(int Damage); //Por Parametros
    ~BolaDeFuego(); //Destructor

    //METODOS
    void Usar() override;

private:
    int Damage;
};


#endif //REPASO_POO_BOLADEFUEGO_H
