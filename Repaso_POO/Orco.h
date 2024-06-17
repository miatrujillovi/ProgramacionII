#ifndef REPASO_POO_ORCO_H
#define REPASO_POO_ORCO_H
#include "Enemigo.h"
#include <iostream>

class Orco : public Enemigo{
public:
    //CONSTRUCTORES
    Orco(); //Implicito
    Orco(int Vida, int Damage,
         std::string Color, bool Arma); //Por Parametros
    ~Orco(); //Destructor

    void GettingHit(int damage) override;

    //GETTERS Y SETTERS
    std::string getColor() const;
    void setColor(std::string newColor);
    bool getArma() const;
    void setArma(bool newArma);

private:
    std::string Color;
    bool Arma;
};


#endif //REPASO_POO_ORCO_H
