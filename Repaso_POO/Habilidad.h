#ifndef REPASO_POO_HABILIDAD_H
#define REPASO_POO_HABILIDAD_H
#include <iostream>

class Habilidad {
public:
    //CONSTRUCTORES
    Habilidad(); //Implicito
    virtual ~Habilidad(); //Destructor

    //METODOS
    virtual void Usar();

    //SOBRECARGA DE OPERADORES
    bool operator==(const Habilidad& otra) const;

private:

};


#endif //REPASO_POO_HABILIDAD_H
