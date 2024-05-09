#include "CharCell.h"

// CONSTRUCTORES
CharCell::CharCell() {
    Cara = 00;
}

CharCell::CharCell(const CharCell &rhs) {
    Cara = rhs.Cara;
}

CharCell::CharCell(char newCara) {
    this -> Cara = newCara;
}

// SOBRECARGAS DE OPERADORES DE ASIGNACION
CharCell &CharCell::operator=(const CharCell &rhs) {
    if (Cara != rhs.Cara) {
        this -> Cara = rhs.Cara;
    }
    return *this;
}

CharCell &CharCell::operator=(const char Primitive) {
    if (Cara != Primitive) {
        this -> Cara = Primitive;
    }
    return *this;
}

// SOBRECARGA DE OPERADORES DE COMPARACION
bool CharCell::operator==(const CharCell &rhs) {
    if (Cara==rhs.Cara){
        return true;
    }
    return false;
}

bool CharCell::operator==(const char Primitive) {
    if (Cara == Primitive){
        return true;
    }
    return false;
}

bool CharCell::operator!=(const CharCell &rhs) {
    if (Cara!=rhs.Cara){
        return true;
    }
    return false;
}

bool CharCell::operator!=(const char Primitive) {
    if (Cara != Primitive){
        return true;
    }
    return false;
}