#ifndef PROGRAMACIONII_INTCELL_H
#define PROGRAMACIONII_INTCELL_H

class IntCell{
public:
    // CONSTRUCTORES
    IntCell(); //Implicito
    IntCell(const IntCell &rhs); //Por Copia
    IntCell(int Num); //Por Parametros
    ~IntCell() = default; //Destructor

    // SOBRECARGAS DE OPERADORES
    // Operadores de Asignacion
    IntCell &operator= (const IntCell &rhs);
    IntCell &operator= (const int Primitive);
    // Operadores de Arimeticos
    IntCell &operator+ (const IntCell &rhs);
    IntCell &operator+ (const int Primitive);
    IntCell &operator- (const IntCell &rhs);
    IntCell &operator- (const int Primitive);
    IntCell &operator* (const IntCell &rhs);
    IntCell &operator* (const int Primitive);
    IntCell &operator/ (const IntCell &rhs);
    IntCell &operator/ (const int Primitive);
    IntCell operator% (const IntCell &rhs);
    IntCell operator% (const int Primitive);
    // Operadores de Comparacion
    bool operator> (const IntCell &rhs);
    bool operator> (const int Primitive);
    bool operator< (const IntCell &rhs);
    bool operator< (const int Primitive);
    bool operator== (const IntCell &rhs);
    bool operator== (const int Primitive);
    bool operator>= (const IntCell &rhs);
    bool operator>= (const int Primitive);
    bool operator<= (const IntCell &rhs);
    bool operator<= (const int Primitive);
    bool operator!= (const IntCell &rhs);
    bool operator!= (const int Primitive);

private:
    int Num;
};


#endif //PROGRAMACIONII_INTCELL_H
