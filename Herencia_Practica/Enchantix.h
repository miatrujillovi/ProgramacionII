#ifndef HERENCIA_PRACTICA_ENCHANTIX_H
#define HERENCIA_PRACTICA_ENCHANTIX_H

#include "Charmix.h"

class Enchantix : public Charmix{
public:
    //CONSTRUCTORES
    Enchantix(); //Implicito
    Enchantix(const Enchantix &rhs); //Por Referencia
    Enchantix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
              std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia,
              bool PolvoHadas, bool Mini, bool Healing); //Por Parametros
    ~Enchantix() = default;

    //GETTERS Y SETTERS
    bool getPolvoHadas() const;
    void setPolvoHadas(bool newPolvoHadas);
    bool getMini() const;
    void setMini(bool newMini);
    bool getHealing() const;
    void setHealing(bool newHealing);

private:
    bool PolvoHadas;
    bool Mini;
    bool Healing;
};


#endif //HERENCIA_PRACTICA_ENCHANTIX_H
