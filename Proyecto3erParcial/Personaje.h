#ifndef PROYECTO3ERPARCIAL_PERSONAJE_H
#define PROYECTO3ERPARCIAL_PERSONAJE_H
#include <iostream>
#include "Inventario.h"
#include "Jugador.h"
#include "BolaDeFuego.h"
#include "Curar.h"

class Personaje : public Inventario, public Jugador, public BolaDeFuego, public Curar {
public:
    //CONSTRUCTORES
    Personaje(); //Implicito
    Personaje(int DamageJ, int Mana, std::string Nombre, int Salud); //Por Parametros
    ~Personaje(); //Destructor

    //METODOS
    void mostrarInformacion() override;

};

#endif //PROYECTO3ERPARCIAL_PERSONAJE_H
