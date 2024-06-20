#ifndef PROYECTO3ERPARCIAL_JUGADOR_H
#define PROYECTO3ERPARCIAL_JUGADOR_H
#include <iostream>
#include "Entidad.h"

class Jugador : public Entidad {
public:
    //CONSTRUCTORES
    Jugador(); //Implicito
    Jugador(int DamageJ, int Mana,
            std::string Nombre, int Salud); //Por Parametros
    ~Jugador(); //Destructor

    //METODOS
    void mostrarInformacion() override;

    //GETTERS Y SETTERS
    int getDamageJ() const;
    void setDamageJ(int newDamageJ);
    int getMana() const;
    void setMana(int newMana);

private:
    int DamageJ;
    int Mana;
};


#endif //PROYECTO3ERPARCIAL_JUGADOR_H
