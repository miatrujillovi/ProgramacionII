#ifndef REPASO_POO_ENEMIGO_H
#define REPASO_POO_ENEMIGO_H
#include <iostream>

class Enemigo {
public:
    //CONSTRUCTORES
    Enemigo(); // Implicito
    Enemigo(int Vida, int Damage); //Por Parametros
    virtual ~Enemigo(); //Destructor

    virtual void GettingHit(int damage);

    //GETTERS Y SETTERS
    int getVida() const;
    void setVida(int newVida);
    int getDamage() const;
    void setDamage(int newDamage);

private:
    int Vida;
    int Damage;
};


#endif //REPASO_POO_ENEMIGO_H
