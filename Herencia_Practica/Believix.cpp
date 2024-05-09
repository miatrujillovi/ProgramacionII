#include "Believix.h"

//CONSTRUCTORES
Believix::Believix() : Enchantix() {
    Creyentes = 0;
    Velocidix = false;
    Tracix = false;
    Zoomix = false;
}

Believix::Believix(const Believix &rhs) {
    Creyentes = rhs.Creyentes;
    Velocidix = rhs.Velocidix;
    Tracix = rhs.Tracix;
    Zoomix = rhs.Zoomix;
}

Believix::Believix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
                   std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia,
                   bool PolvoHadas, bool Mini, bool Healing,
                   int Creyentes, bool Velocidix, bool Tracix, bool Zoomix) : Enchantix(Nombre, Edad, Altura, Peso, TipoSangre, ATKOfensivo, ATKDefensivo, CantidadEnergia, PolvoHadas, Mini, Healing){
    this -> Creyentes = Creyentes;
    this -> Velocidix = Velocidix;
    this -> Tracix = Tracix;
    this -> Zoomix = Zoomix;
}

//GETTERS
int Believix::getCreyentes() const {
    return Creyentes;
}
bool Believix::getVelocidix() const {
    return Velocidix;
}
bool Believix::getTracix() const {
    return Tracix;
}
bool Believix::getZoomix() const {
    return Zoomix;
}

//SETTERS
void Believix::setCreyentes(int newCreyentes) {
    this -> Creyentes = newCreyentes;
};
void Believix::setVelocidix(bool newVelocidix) {
    this -> Velocidix = newVelocidix;
};
void Believix::setTracix(bool newTracix) {
    this -> Tracix = newTracix;
};
void Believix::setZoomix(bool newZoomix) {
    this -> Zoomix = newZoomix;
};