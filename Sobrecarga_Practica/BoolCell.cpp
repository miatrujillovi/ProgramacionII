#include "BoolCell.h"

// CONSTRUCTORES
BoolCell::BoolCell() {
    Case = false;
}

BoolCell::BoolCell(const BoolCell &rhs) {
    Case = rhs.Case;
}

BoolCell::BoolCell(bool newCase) {
    this -> Case = newCase;
}

// SOBRECARGAS DE OPERADORES DE ASIGNACION
BoolCell &BoolCell::operator=(const BoolCell &rhs) {
    if (Case != rhs.Case) {
        this -> Case = rhs.Case;
    }
    return *this;
}

BoolCell &BoolCell::operator=(const bool Primitive) {
    if (Case != Primitive) {
        this -> Case = Primitive;
    }
    return *this;
}

// SOBRECARGA DE OPERADORES DE COMPARACION
bool BoolCell::operator==(const BoolCell &rhs) {
    if (Case==rhs.Case){
        return true;
    }
    return false;
}

bool BoolCell::operator==(const bool Primitive) {
    if (Case == Primitive){
        return true;
    }
    return false;
}

bool BoolCell::operator!=(const BoolCell &rhs) {
    if (Case!=rhs.Case){
        return true;
    }
    return false;
}

bool BoolCell::operator!=(const bool Primitive) {
    if (Case != Primitive){
        return true;
    }
    return false;
}
