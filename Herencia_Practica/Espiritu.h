#ifndef HERENCIA_PRACTICA_ESPIRITU_H
#define HERENCIA_PRACTICA_ESPIRITU_H

#include "Persona.h"
#include "Sephiroth.h"
#include "VestidoAstral.h"

class Espiritu : public Persona, public Sephiroth, public VestidoAstral{
public:
    //CONSTRUCTORES
    Espiritu(); //Implicito
    Espiritu(const Espiritu &rhs); //Por Copia
    Espiritu(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
             std::string Angel, std::string Sephira, std::string Rango,
             std::string NombreVestido, std::string Forma, std::string Color); //Por Parametros
    ~Espiritu() = default;
};

#endif //HERENCIA_PRACTICA_ESPIRITU_H
