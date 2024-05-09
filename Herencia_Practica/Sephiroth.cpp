#include "Sephiroth.h"

//CONSTRUCTORES
Sephiroth::Sephiroth() {
    Angel = "N/A";
    Sephira = "N/A";
    Rango = "N/A";
}

Sephiroth::Sephiroth(const Sephiroth &rhs) {
    Angel = rhs.Angel;
    Sephira = rhs.Sephira;
    Rango = rhs.Rango;
}

Sephiroth::Sephiroth(std::string Angel, std::string Sephira, std::string Rango) {
    this -> Angel = Angel;
    this -> Sephira = Sephira;
    this -> Rango = Rango;
}

//GETTERS
std::string Sephiroth::getAngel() const {
    return Angel;
}
std::string Sephiroth::getSephira() const {
    return Sephira;
}
std::string Sephiroth::getRango() const {
    return Rango;
}

//SETTERS
void Sephiroth::setAngel(std::string newAngel) {
    this -> Angel = newAngel;
};
void Sephiroth::setSephira(std::string newSephira) {
    this -> Sephira = newSephira;
};
void Sephiroth::setRango(std::string newRango) {
    this -> Rango = newRango;
};
