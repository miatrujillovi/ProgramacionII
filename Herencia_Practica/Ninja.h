#ifndef PROGRAMACIONII_NINJA_H
#define PROGRAMACIONII_NINJA_H

#include "Persona.h"

class Ninja : public Persona {
public:
    //CONSTRUCTORES
    Ninja(); //Implicito
    Ninja(const Ninja &rhs); //Por Copia
    Ninja(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre, std::string Elemento, std::string Arma, std::string Maestro);//Por Parametros
    ~Ninja() = default; //Destructor

    //GETTERS Y SETTERS
    std::string getElemento() const;
    void setElemento(std::string newElemento);
    std::string getArma() const;
    void setArma(std::string newArma);
    std::string getMaestro() const;
    void setMaestro(std::string newMaestro);

private:
    std::string Elemento;
    std::string Arma;
    std::string Maestro;
};


#endif //PROGRAMACIONII_NINJA_H
