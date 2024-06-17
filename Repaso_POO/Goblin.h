#ifndef REPASO_POO_GOBLIN_H
#define REPASO_POO_GOBLIN_H
#include "Enemigo.h"
#include <iostream>

class Goblin : public Enemigo{
public:
    //CONSTRUCTORES
    Goblin(); //Implicito
    Goblin(int Vida, int Damage,
           bool Mordida, bool AtaqueSalto); //Por Parametros
    ~Goblin(); //Destructor

    void GettingHit(int damage) override;

    //GETTERS Y SETTERS
    bool getMordida() const;
    void setMordida(bool newMordida);
    bool getAtaqueSalto() const;
    void setAtaqueSalto(bool newAtaqueSalto);

private:
    bool Mordida;
    bool AtaqueSalto;
};


#endif //REPASO_POO_GOBLIN_H
