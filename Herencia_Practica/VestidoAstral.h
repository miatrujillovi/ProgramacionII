#ifndef HERENCIA_PRACTICA_VESTIDOASTRAL_H
#define HERENCIA_PRACTICA_VESTIDOASTRAL_H

#include <iostream>

class VestidoAstral {
public:
    //CONSTRUCTORES
    VestidoAstral(); //Implicito
    VestidoAstral(const VestidoAstral &rhs); //Por Referencia
    VestidoAstral(std::string NombreVestido, std::string Forma, std::string Color); //Por Parametros
    ~VestidoAstral() = default;

    //GETTERS Y SETTERS
    std::string getNombreVestido() const;
    void setNombreVestido(std::string newNombreVestido);
    std::string getForma() const;
    void setForma(std::string newForma);
    std::string getColor() const;
    void setColor(std::string newColor);

private:
    std::string NombreVestido;
    std::string Forma;
    std::string Color;
};


#endif //HERENCIA_PRACTICA_VESTIDOASTRAL_H
