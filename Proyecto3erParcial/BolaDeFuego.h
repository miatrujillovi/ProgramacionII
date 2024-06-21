#ifndef PROYECTO3ERPARCIAL_BOLADEFUEGO_H
#define PROYECTO3ERPARCIAL_BOLADEFUEGO_H
#include <iostream>
#include "Habilidad.h"
#include "Entidad.h"
#include "Jugador.h"

class BolaDeFuego : public Habilidad, public Entidad{
public:
    //CONSTRUCTORES
    BolaDeFuego(); //Implicito
    BolaDeFuego(int Costo); //Por Parametros
    ~BolaDeFuego(); //Destructor

    //METODOS
    void usarHabilidad() override;

private:
    Jugador jugador;
};


#endif //PROYECTO3ERPARCIAL_BOLADEFUEGO_H
