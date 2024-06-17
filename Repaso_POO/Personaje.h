#ifndef REPASO_POO_PERSONAJE_H
#define REPASO_POO_PERSONAJE_H
#include <iostream>

class Personaje {
public:
    //CONSTRUCTORES
    Personaje(); //Implicito
    Personaje(std::string Nombre, float Altura, float Peso, int NivelPersonaje); //Por Parametros
    virtual ~Personaje(); //Destructor

    virtual void Atacar();

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
};


#endif //REPASO_POO_PERSONAJE_H
