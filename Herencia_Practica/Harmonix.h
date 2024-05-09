#ifndef HERENCIA_PRACTICA_HARMONIX_H
#define HERENCIA_PRACTICA_HARMONIX_H

#include "Believix.h"

class Harmonix : public Believix {
public:
    //CONSTRUCTORES
    Harmonix(); //Implicito
    Harmonix(const Harmonix &rhs); //Por Referencia
    Harmonix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
             std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia,
             bool PolvoHadas, bool Mini, bool Healing,
             int Creyentes, bool Velocidix, bool Tracix, bool Zoomix,
             bool NadarWAlas, bool ResContaminacion, int CajaSirenix); //Por Parametros
    ~Harmonix() = default; //Destructor

    //GETTERS Y SETTERS
    bool getNadarWAlas() const;
    void setNadarWAlas(bool newNadarWAlas);
    bool getResContaminacion() const;
    void setResContaminacion(bool newResContaminacion);
    int getCajaSirenix() const;
    void setCajaSirenix(int newCajaSirenix);

private:
    bool NadarWAlas;
    bool ResContaminacion;
    int CajaSirenix;
};


#endif //HERENCIA_PRACTICA_HARMONIX_H
