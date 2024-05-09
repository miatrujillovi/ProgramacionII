#include "Harmonix.h"

//CONSTRUCTORES
Harmonix::Harmonix() {
    NadarWAlas = true;
    ResContaminacion = true;
    CajaSirenix = 0;
}

Harmonix::Harmonix(const Harmonix &rhs) {
    NadarWAlas = rhs.NadarWAlas;
    ResContaminacion = rhs.ResContaminacion;
    CajaSirenix = rhs.CajaSirenix;
}

Harmonix::Harmonix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
                   std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia,
                   bool PolvoHadas, bool Mini, bool Healing,
                   int Creyentes, bool Velocidix, bool Tracix, bool Zoomix,
                   bool NadarWAlas, bool ResContaminacion, int CajaSirenix) : Believix(Nombre, Edad, Altura, Peso, TipoSangre, ATKOfensivo, ATKDefensivo, CantidadEnergia, PolvoHadas, Mini, Healing, Creyentes, Velocidix, Tracix, Zoomix){
    this -> NadarWAlas = NadarWAlas;
    this -> ResContaminacion = ResContaminacion;
    this -> CajaSirenix = CajaSirenix;
}

//GETTERS
bool Harmonix::getNadarWAlas() const {
    return NadarWAlas;
}
bool Harmonix::getResContaminacion() const {
    return ResContaminacion;
}
int Harmonix::getCajaSirenix() const {
    return CajaSirenix;
}

//SETTERS
void Harmonix::setNadarWAlas(bool newNadarWAlas) {
    this -> NadarWAlas = newNadarWAlas;
};
void Harmonix::setResContaminacion(bool newResContaminacion) {
    this -> ResContaminacion = ResContaminacion;
};
void Harmonix::setCajaSirenix(int newCajaSirenix) {
    this -> CajaSirenix = newCajaSirenix;
};