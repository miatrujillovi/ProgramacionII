#ifndef PROGRAMACIONII_FLOATCELL_H
#define PROGRAMACIONII_FLOATCELL_H

class FloatCell{
public:
    // CONSTRUCTORES
    FloatCell(); //Implicito
    FloatCell(const FloatCell &rhs); //Por Copia
    FloatCell(float Num); //Por Parametros
    ~FloatCell() = default; //Destructor

    // SOBRECARGAS DE OPERADORES
    // Operadores de Asignacion
    FloatCell &operator= (const FloatCell &rhs);
    FloatCell &operator= (const float Primitive);
    // Operadores de Aritmeticos
    FloatCell &operator+ (const FloatCell &rhs);
    FloatCell &operator+ (const float Primitive);
    FloatCell &operator- (const FloatCell &rhs);
    FloatCell &operator- (const float Primitive);
    FloatCell &operator* (const FloatCell &rhs);
    FloatCell &operator* (const float Primitive);
    FloatCell &operator/ (const FloatCell &rhs);
    FloatCell &operator/ (const float Primitive);
    FloatCell operator% (const FloatCell &rhs);
    FloatCell operator% (const float Primitive);
    // Operadores de Comparacion
    bool operator> (const FloatCell &rhs);
    bool operator> (const float Primitive);
    bool operator< (const FloatCell &rhs);
    bool operator< (const float Primitive);
    bool operator== (const FloatCell &rhs);
    bool operator== (const float Primitive);
    bool operator>= (const FloatCell &rhs);
    bool operator>= (const float Primitive);
    bool operator<= (const FloatCell &rhs);
    bool operator<= (const float Primitive);
    bool operator!= (const FloatCell &rhs);
    bool operator!= (const float Primitive);

private:
    float Num;
};

#endif //PROGRAMACIONII_FLOATCELL_H
