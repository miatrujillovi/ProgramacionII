#ifndef PROYECTO3ERPARCIAL_HABILIDAD_H
#define PROYECTO3ERPARCIAL_HABILIDAD_H
#include <iostream>

class Habilidad {
public:
    //CONSTRUCTORES
    Habilidad(); //Implicito
    Habilidad(int Costo); //Por Parametros
    virtual ~Habilidad(); //Destructor

    //METODOS
    virtual void usarHabilidad();

    //GETTERS Y SETTERS
    int getCosto() const;
    void setCosto(int newCosto);

private:
    int Costo;
};


#endif //PROYECTO3ERPARCIAL_HABILIDAD_H
