#ifndef PROYECTO3ERPARCIAL_ENTIDAD_H
#define PROYECTO3ERPARCIAL_ENTIDAD_H
#include <iostream>
#include <string>

class Entidad {
public:
    //CONSTRUCTORES
    Entidad(); //Implicito
    Entidad(std::string Nombre, int Salud); //Por Parametros
    virtual ~Entidad(); //Explicito

    //METODOS
    virtual void mostrarInformacion();

    //GETTERS Y SETTERS
    std::string getNombre() const;
    void setNombre(std::string newNombre);
    int getSalud() const;
    void setSalud(int newSalud);

private:
    std::string Nombre;
    int Salud;
};


#endif //PROYECTO3ERPARCIAL_ENTIDAD_H
