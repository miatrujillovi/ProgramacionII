#ifndef PROYECTO3ERPARCIAL_CURAR_H
#define PROYECTO3ERPARCIAL_CURAR_H
#include <iostream>
#include "Habilidad.h"
#include "Entidad.h"
#include "Jugador.h"

class Curar : public Habilidad, public Entidad {
public:
    //CONSTRUCTORES
    Curar(); //Implicito
    Curar(int Costo); //Por Parametros
    ~Curar(); //Destructor

    //METODOS
    void usarHabilidad() override;

private:
    Jugador *jugador;
};


#endif //PROYECTO3ERPARCIAL_CURAR_H
