#include "FloatCell.h"

// CONSTRUCTORES
FloatCell::FloatCell(){
    Num = 0;
}

FloatCell::FloatCell(const FloatCell &rhs) {
    Num = rhs.Num;
}

FloatCell::FloatCell(float newNum) {
    this -> Num = newNum;
}

// SOBRECARGAS DE OPERADORES DE ASIGNACION
FloatCell &FloatCell::operator=(const FloatCell &rhs) {
    if (Num != rhs.Num) {
        this -> Num = rhs.Num;
    }
    return *this;
}

FloatCell &FloatCell::operator=(const float Primitive) {
    if (Num != Primitive) {
        this -> Num = Primitive;
    }
    return *this;
}

// SOBRECARGAS DE OPERADORES ARITMETICOS
FloatCell &FloatCell::operator+(const FloatCell &rhs) {
    this -> Num = Num+rhs.Num;
    return *this;
}

FloatCell &FloatCell::operator+(const float Primitive) {
    this -> Num = Num + Primitive;
    return *this;
}

FloatCell &FloatCell::operator-(const FloatCell &rhs) {
    this -> Num = Num-rhs.Num;
    return *this;
}

FloatCell &FloatCell::operator-(const float Primitive) {
    this -> Num = Num - Primitive;
    return *this;
}

FloatCell &FloatCell::operator*(const FloatCell &rhs) {
    this -> Num = Num*rhs.Num;
    return *this;
}

FloatCell &FloatCell::operator*(const float Primitive) {
    this -> Num = Num * Primitive;
    return *this;
}

FloatCell &FloatCell::operator/(const FloatCell &rhs) {
    this -> Num = Num/rhs.Num;
    return *this;
}

FloatCell &FloatCell::operator/(const float Primitive) {
    this -> Num = Num / Primitive;
    return *this;
}

FloatCell FloatCell::operator%(const FloatCell &rhs) {
    int Residuo = (int)Num % (int)rhs.Num;
    return FloatCell(Residuo);
}

FloatCell FloatCell::operator%(const float Primitive) {
    float Residuo = (int)Num % (int)Primitive;
    return Residuo;
}

// SOBRECARGA DE OPERADORES DE COMPARACION
bool FloatCell::operator>(const FloatCell &rhs) {
    if (Num > rhs.Num){
        return true;
    }
    return false;
}

bool FloatCell::operator>(const float Primitive) {
    if (Num > Primitive){
        return true;
    }
    return false;
}

bool FloatCell::operator<(const FloatCell &rhs) {
    if (Num < rhs.Num){
        return true;
    }
    return false;
}

bool FloatCell::operator<(const float Primitive) {
    if (Num < Primitive){
        return true;
    }
    return false;
}

bool FloatCell::operator==(const FloatCell &rhs) {
    if (Num == rhs.Num){
        return true;
    }
    return false;
}

bool FloatCell::operator==(const float Primitive) {
    if (Num == Primitive){
        return true;
    }
    return false;
}

bool FloatCell::operator>=(const FloatCell &rhs) {
    if (Num >= rhs.Num) {
        return true;
    }
    return false;
}

bool FloatCell::operator>=(const float Primitive) {
    if (Num >= Primitive){
        return true;
    }
    return false;
}

bool FloatCell::operator<=(const FloatCell &rhs) {
    if (Num <= rhs.Num){
        return true;
    }
    return false;
}

bool FloatCell::operator<=(const float Primitive) {
    if (Num <= Primitive){
        return true;
    }
    return false;
}

bool FloatCell::operator!=(const FloatCell &rhs) {
    if (Num != rhs.Num){
        return true;
    }
    return false;
}

bool FloatCell::operator!=(const float Primitive) {
    if (Num != Primitive){
        return true;
    }
    return false;
}
