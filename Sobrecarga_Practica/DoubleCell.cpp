#include "DoubleCell.h"

// CONSTRUCTORES
DoubleCell::DoubleCell() {
    Num = 0;
}

DoubleCell::DoubleCell(const DoubleCell &rhs) {
    Num = rhs.Num;
}

DoubleCell::DoubleCell(double newNum) {
    this -> Num = newNum;
}

// SOBRECARGAS DE OPERADORES DE ASIGNACION
DoubleCell &DoubleCell::operator=(const DoubleCell &rhs) {
    if (Num != rhs.Num) {
        this -> Num = rhs.Num;
    }
    return *this;
}

DoubleCell &DoubleCell::operator=(const double Primitive) {
    if (Num != Primitive) {
        this -> Num = Primitive;
    }
    return *this;
}

// SOBRECARGAS DE OPERADORES ARITMETICOS
DoubleCell &DoubleCell::operator+(const DoubleCell &rhs) {
    this -> Num = Num+rhs.Num;
    return *this;
}

DoubleCell &DoubleCell::operator+(const double Primitive) {
    this -> Num = Num + Primitive;
    return *this;
}

DoubleCell &DoubleCell::operator-(const DoubleCell &rhs) {
    this -> Num = Num-rhs.Num;
    return *this;
}

DoubleCell &DoubleCell::operator-(const double Primitive) {
    this -> Num = Num - Primitive;
    return *this;
}

DoubleCell &DoubleCell::operator*(const DoubleCell &rhs) {
    this -> Num = Num*rhs.Num;
    return *this;
}

DoubleCell &DoubleCell::operator*(const double Primitive) {
    this -> Num = Num * Primitive;
    return *this;
}

DoubleCell &DoubleCell::operator/(const DoubleCell &rhs) {
    this -> Num = Num/rhs.Num;
    return *this;
}

DoubleCell &DoubleCell::operator/(const double Primitive) {
    this -> Num = Num / Primitive;
    return *this;
}

DoubleCell DoubleCell::operator%(const DoubleCell &rhs) {
    int Residuo = (int)Num % (int)rhs.Num;
    return DoubleCell(Residuo);
}

DoubleCell DoubleCell::operator%(const double Primitive) {
    double Residuo = (int)Num % (int)Primitive;
    return Residuo;
}

// SOBRECARGA DE OPERADORES DE COMPARACION
bool DoubleCell::operator>(const DoubleCell &rhs) {
    if (Num > rhs.Num){
        return true;
    }
    return false;
}

bool DoubleCell::operator>(const double Primitive) {
    if (Num > Primitive){
        return true;
    }
    return false;
}

bool DoubleCell::operator<(const DoubleCell &rhs) {
    if (Num < rhs.Num){
        return true;
    }
    return false;
}

bool DoubleCell::operator<(const double Primitive) {
    if (Num = Num < Primitive){
        return true;
    }
    return false;
}

bool DoubleCell::operator==(const DoubleCell &rhs) {
    if (Num==rhs.Num){
        return true;
    }
    return false;
}

bool DoubleCell::operator==(const double Primitive) {
    if (Num == Primitive){
        return true;
    }
    return false;
}

bool DoubleCell::operator>=(const DoubleCell &rhs) {
    if (Num>=rhs.Num){
        return true;
    }
    return false;
}

bool DoubleCell::operator>=(const double Primitive) {
    if (Num >= Primitive){
        return true;
    }
    return false;
}

bool DoubleCell::operator<=(const DoubleCell &rhs) {
    if (Num <= rhs.Num){
        return true;
    }
    return false;
}

bool DoubleCell::operator<=(const double Primitive) {
    if (Num <= Primitive){
        return true;
    }
    return false;
}

bool DoubleCell::operator!=(const DoubleCell &rhs) {
    if (Num != rhs.Num){
        return true;
    }
    return false;
}

bool DoubleCell::operator!=(const double Primitive) {
    if (Num != Primitive){
        return true;
    }
    return false;
}
