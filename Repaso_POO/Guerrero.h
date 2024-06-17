#ifndef REPASO_POO_GUERRERO_H
#define REPASO_POO_GUERRERO_H
#include "Personaje.h"
#include "Inventario.h"
#include <iostream>

class Guerrero : public Personaje, public Inventario{
public:
    //CONSTRUCTORES
    Guerrero(); //Implicito
    Guerrero(std::string Nombre, float Altura, float Peso, int NivelPersonaje,
             std::string Arma, bool Armadura); //Por Parametros
    ~Guerrero();

    void Atacar() override;

    //GETTERS Y SETTERS
    std::string getArma() const;
    void setArma(std::string newArma);
    bool getArmadura() const;
    void setArmadura(bool newArmadura);

private:
    std::string Arma;
    bool Armadura;
};


#endif //REPASO_POO_GUERRERO_H
