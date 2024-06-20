#ifndef PROYECTO3ERPARCIAL_ENEMIGO_H
#define PROYECTO3ERPARCIAL_ENEMIGO_H
#include <iostream>
#include "Entidad.h"

class Enemigo : public Entidad{
public:
    //CONSTRUCTORES
    Enemigo(); //Implicito
    Enemigo(int DamageE, std::string Armadura,
            std::string Nombre, int Salud); //Por Parametros
    ~Enemigo(); //Destructor

    //METODOS
    void mostrarInformacion() override;

    //GETTERS Y SETTERS
    int getDamageE() const;
    void setDamageE(int newDamageE);
    std::string getArmadura() const;
    void setArmadura(std::string newArmadura);

private:
    int DamageE;
    std::string Armadura;
};


#endif //PROYECTO3ERPARCIAL_ENEMIGO_H
