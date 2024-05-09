#ifndef HERENCIA_PRACTICA_CHARMIX_H
#define HERENCIA_PRACTICA_CHARMIX_H

#include "Persona.h"

class Charmix : public Persona {
public:
    //CONSTRUCTORES
    Charmix(); //Implicito
    Charmix(const Charmix &rhs); //Por Copia
    Charmix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre, std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia); //Por Parametros
    ~Charmix() = default; //Destructor

    //GETTERS Y SETTERS
    std::string getATKOfensivo() const;
    void setATKOfensivo(std::string newATKOfensivo);
    std::string getATKDefensivo() const;
    void setATKDefensivo(std::string newATKDefensivo);
    int getCantidadEnergia() const;
    void setCantidadEnergia(int newCantidadEnergia);

private:
    std::string ATKOfensivo;
    std::string ATKDefensivo;
    int CantidadEnergia;
};


#endif //HERENCIA_PRACTICA_CHARMIX_H
