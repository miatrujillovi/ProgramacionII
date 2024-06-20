#ifndef PROYECTO3ERPARCIAL_ENEMIGO_H
#define PROYECTO3ERPARCIAL_ENEMIGO_H
#include <iostream>
#include "Entidad.h"

class Enemigo : public Entidad{
public:
    //CONSTRUCTORES
    Enemigo(); //Implicito
    Enemigo(int DamageE, int Armadura,
            std::string Nombre, int Salud); //Por Parametros
    ~Enemigo(); //Destructor

    //METODOS
    void mostrarInformacion() override;

    //GETTERS Y SETTERS
    int getDamageE() const;
    void setDamageE(int newDamageE);
    int getArmadura() const;
    void setArmadura(int newArmadura);

private:
    int DamageE;
    int Armadura;
};


#endif //PROYECTO3ERPARCIAL_ENEMIGO_H
