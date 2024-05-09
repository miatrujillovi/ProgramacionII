#include "IntCell.h"

// CONSTRUCTORES
IntCell::IntCell() {
    Num = 0;
}

IntCell::IntCell(const IntCell &rhs) {
    Num = rhs.Num;
}

IntCell::IntCell(int newNum) {
    this -> Num = newNum;
}

// SOBRECARGAS DE OPERADORES DE ASIGNACION
IntCell &IntCell::operator=(const IntCell &rhs) {
    if (Num != rhs.Num) {
        this -> Num = rhs.Num;
    }
    return *this;
}

IntCell &IntCell::operator=(const int Primitive) {
    if (Num != Primitive) {
        this -> Num = Primitive;
    }
    return *this;
}

// SOBRECARGAS DE OPERADORES ARITMETICOS
IntCell &IntCell::operator+(const IntCell &rhs) {
    this -> Num = Num+rhs.Num;
    return *this;
}

IntCell &IntCell::operator+(const int Primitive) {
    this -> Num = Num + Primitive;
    return *this;
}

IntCell &IntCell::operator-(const IntCell &rhs) {
    this -> Num = Num-rhs.Num;
    return *this;
}

IntCell &IntCell::operator-(const int Primitive) {
    this -> Num = Num - Primitive;
    return *this;
}

IntCell &IntCell::operator*(const IntCell &rhs) {
    this -> Num = Num*rhs.Num;
    return *this;
}

IntCell &IntCell::operator*(const int Primitive) {
    this -> Num = Num * Primitive;
    return *this;
}

IntCell &IntCell::operator/(const IntCell &rhs) {
    this -> Num = Num/rhs.Num;
    return *this;
}

IntCell &IntCell::operator/(const int Primitive) {
    this -> Num = Num / Primitive;
    return *this;
}

IntCell IntCell::operator%(const IntCell &rhs) {
    int Residuo = Num % rhs.Num;
    return IntCell(Residuo);
}

IntCell IntCell::operator%(const int Primitive) {
    int Residuo = Num % Primitive;
    return Residuo;
}

// SOBRECARGA DE OPERADORES DE COMPARACION
bool IntCell::operator>(const IntCell &rhs) {
    if (Num>rhs.Num){
        return true;
    }
    return false;
}

bool IntCell::operator>(const int Primitive) {
    if (Num > Primitive){
        return true;
    }
    return false;
}

bool IntCell::operator<(const IntCell &rhs) {
    if (Num<rhs.Num){
        return true;
    }
    return false;
}

bool IntCell::operator<(const int Primitive) {
    if (Num < Primitive){
        return true;
    }
    return false;
}

bool IntCell::operator==(const IntCell &rhs) {
    if (Num==rhs.Num){
        return true;
    }
    return false;
}

bool IntCell::operator==(const int Primitive) {
    if (Num == Primitive){
        return true;
    }
    return false;
}

bool IntCell::operator>=(const IntCell &rhs) {
    if (Num>=rhs.Num){
        return true;
    }
    return false;
}

bool IntCell::operator>=(const int Primitive) {
    if (Num >= Primitive){
        return true;
    }
    return false;
}
bool IntCell::operator<=(const IntCell &rhs) {
    if (Num<=rhs.Num){
        return true;
    }
    return false;
}

bool IntCell::operator<=(const int Primitive) {
    if (Num <= Primitive){
        return true;
    }
    return false;
}

bool IntCell::operator!=(const IntCell &rhs) {
    if (Num!=rhs.Num){
        return true;
    }
    return false;
}

bool IntCell::operator!=(const int Primitive) {
    if (Num != Primitive){
        return true;
    }
    return false;
}