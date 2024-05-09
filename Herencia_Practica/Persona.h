#ifndef PROGRAMACIONII_PERSONA_H
#define PROGRAMACIONII_PERSONA_H

#include <iostream>

class Persona{
public:
    //CONSTRUCTORES
    Persona(); //Implicito
    Persona(const Persona &rhs); //Por Copia
    Persona(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre); //Por Parametros
    ~Persona() = default; //Destructor

    //GETTERS Y SETTERS
    std::string getNombre() const;
    void setNombre(std::string newNombre);
    int getEdad() const;
    void setEdad(int newEdad);
    int getAltura() const;
    void setAltura(int newAltura);
    int getPeso() const;
    void setPeso(int newPeso);
    std::string getTipoSangre() const;
    void setTipoSangre(std::string newTipoSangre);

private:
    std::string Nombre;
    int Edad;
    int Altura;
    int Peso;
    std::string TipoSangre;
};

#endif //PROGRAMACIONII_PERSONA_H
