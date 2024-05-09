#ifndef PROGRAMACIONII_BOOLCELL_H
#define PROGRAMACIONII_BOOLCELL_H

class BoolCell{
public:
    // CONSTRUCTORES
    BoolCell(); //Implicito
    BoolCell(const BoolCell &rhs); //Por Copia
    BoolCell(bool Case); //Por Parametros
    ~BoolCell() = default; //Destructor

    // SOBRECARGAS DE OPERADORES
    // Operadores de Asignacion
    BoolCell &operator= (const BoolCell &rhs);
    BoolCell &operator= (const bool Primitive);
    // Operadores de Comparacion
    bool operator== (const BoolCell &rhs);
    bool operator== (const bool Primitive);
    bool operator!= (const BoolCell &rhs);
    bool operator!= (const bool Primitive);

private:
    bool Case;
};

#endif //PROGRAMACIONII_BOOLCELL_H
