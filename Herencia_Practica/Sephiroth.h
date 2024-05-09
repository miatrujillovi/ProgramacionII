#ifndef HERENCIA_PRACTICA_SEPHIROTH_H
#define HERENCIA_PRACTICA_SEPHIROTH_H

#include <string>

class Sephiroth {
public:
    //CONSTRUCTORES
    Sephiroth(); //Implicito
    Sephiroth(const Sephiroth &rhs); //Por Referencia
    Sephiroth(std::string Angel, std::string Sephira, std::string Rango); //Por Parametros
    ~Sephiroth() = default; //Destructor

    //GETTERS Y SETTERS
    std::string getAngel() const;
    void setAngel(std::string newAngel);
    std::string getSephira() const;
    void setSephira(std::string newSephira);
    std::string getRango() const;
    void setRango(std::string newRango);

private:
    std::string Angel;
    std::string Sephira;
    std::string Rango;
};


#endif //HERENCIA_PRACTICA_SEPHIROTH_H
