#ifndef REPASO_POO_PERSONAJE_H
#define REPASO_POO_PERSONAJE_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Habilidad.h"

class Personaje {
public:
    //CONSTRUCTORES
    Personaje(); //Implicito
    Personaje(std::string Nombre, float Altura, float Peso, int NivelPersonaje); //Por Parametros
    virtual ~Personaje(); //Destructor

    //METODOS
    virtual void Atacar();
    void usarHabilidad(Habilidad object);

    //GETTERS Y SETTERS
    std::string getNombre() const;
    void setNombre(std::string newNombre);
    float getAltura() const;
    void setAltura(float newAltura);
    float getPeso() const;
    void setPeso(float newPeso);
    int getNivelPersonaje() const;
    void setNivelPersonaje(int newNivelPersonaje);

private:
    std::string Nombre;
    float Altura;
    float Peso;
    int NivelPersonaje;
    std::vector<Habilidad> *Ability;
};


#endif //REPASO_POO_PERSONAJE_H
