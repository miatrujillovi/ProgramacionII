#ifndef HERENCIA_PRACTICA_BELIEVIX_H
#define HERENCIA_PRACTICA_BELIEVIX_H

#include "Enchantix.h"

class Believix : public Enchantix {
public:
    //CONSTRUCTORES
    Believix(); //Implicito
    Believix(const Believix &rhs); //Por Referencia
    Believix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
             std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia,
             bool PolvoHadas, bool Mini, bool Healing,
             int Creyentes, bool Velocidix, bool Tracix, bool Zoomix); //Por Parametros
    ~Believix() = default; //Destructor

    //GETTERS Y SETTERS
    int getCreyentes() const;
    void setCreyentes(int newCreyentes);
    bool getVelocidix() const;
    void setVelocidix(bool newVelocidix);
    bool getTracix() const;
    void setTracix(bool newTracix);
    bool getZoomix() const;
    void setZoomix(bool newZoomix);

private:
    int Creyentes;
    bool Velocidix;
    bool Tracix;
    bool Zoomix;
};


#endif //HERENCIA_PRACTICA_BELIEVIX_H
