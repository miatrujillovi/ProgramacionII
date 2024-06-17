#ifndef REPASO_POO_MAGO_H
#define REPASO_POO_MAGO_H
#include "Personaje.h"
#include "Inventario.h"
#include <iostream>

class Mago : public Personaje, public Inventario{
public:
    //CONSTRUCTORES
    Mago(); //Implicito
    Mago(std::string Nombre, float Altura, float Peso, int NivelPersonaje,
        int Mana, std::string TipoMagia); // Por Parametros
    ~Mago(); //Destructor

    void Atacar() override;

    //GETTERS Y SETTERS
    int getMana() const;
    void setMana(int newMana);
    std::string getTipoMagia() const;
    void setTipoMagia(std::string newTipoMagia);

private:
    int Mana;
    std::string TipoMagia;
};


#endif //REPASO_POO_MAGO_H
