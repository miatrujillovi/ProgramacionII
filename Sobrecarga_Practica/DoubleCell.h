#ifndef PROGRAMACIONII_DOUBLECELL_H
#define PROGRAMACIONII_DOUBLECELL_H

class DoubleCell{
public:
    // CONSTRUCTORES
    DoubleCell(); //Implicito
    DoubleCell(const DoubleCell &rhs); //Por Copia
    DoubleCell(double Num); //Por Parametros
    ~DoubleCell() = default; //Destructor

    // SOBRECARGAS DE OPERADORES
    // Operadores de Asignacion
    DoubleCell &operator= (const DoubleCell &rhs);
    DoubleCell &operator= (const double Primitive);
    // Operadores de Aritmeticos
    DoubleCell &operator+ (const DoubleCell &rhs);
    DoubleCell &operator+ (const double Primitive);
    DoubleCell &operator- (const DoubleCell &rhs);
    DoubleCell &operator- (const double Primitive);
    DoubleCell &operator* (const DoubleCell &rhs);
    DoubleCell &operator* (const double Primitive);
    DoubleCell &operator/ (const DoubleCell &rhs);
    DoubleCell &operator/ (const double Primitive);
    DoubleCell operator% (const DoubleCell &rhs);
    DoubleCell operator% (const double Primitive);
    // Operadores de Comparacion
    bool operator> (const DoubleCell &rhs);
    bool operator> (const double Primitive);
    bool operator< (const DoubleCell &rhs);
    bool operator< (const double Primitive);
    bool operator== (const DoubleCell &rhs);
    bool operator== (const double Primitive);
    bool operator>= (const DoubleCell &rhs);
    bool operator>= (const double Primitive);
    bool operator<= (const DoubleCell &rhs);
    bool operator<= (const double Primitive);
    bool operator!= (const DoubleCell &rhs);
    bool operator!= (const double Primitive);

private:
    double Num;
};

#endif //PROGRAMACIONII_DOUBLECELL_H
