#include "Charmix.h"

//CONSTRUCTORES
Charmix::Charmix() : Persona() {
    ATKOfensivo = "N/A";
    ATKDefensivo = "N/A";
    CantidadEnergia = 100;
}

Charmix::Charmix(const Charmix &rhs) {
    ATKOfensivo = rhs.ATKOfensivo;
    ATKDefensivo = rhs.ATKDefensivo;
    CantidadEnergia = rhs.CantidadEnergia;
}

Charmix::Charmix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
                 std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia) : Persona(Nombre, Edad, Altura, Peso, TipoSangre){
    this -> ATKOfensivo = ATKOfensivo;
    this -> ATKDefensivo = ATKDefensivo;
    this -> CantidadEnergia = CantidadEnergia;
}

//GETTERS
std::string Charmix::getATKOfensivo() const{
    return ATKOfensivo;
}
std::string Charmix::getATKDefensivo() const{
    return ATKDefensivo;
}
int Charmix::getCantidadEnergia() const{
    return CantidadEnergia;
}

//SETTERS
void Charmix::setATKOfensivo(std::string newATKOfensivo) {
    this -> ATKOfensivo = newATKOfensivo;
}
void Charmix::setATKDefensivo(std::string newATKDefensivo) {
    this -> ATKDefensivo = newATKDefensivo;
}
void Charmix::setCantidadEnergia(int newCantidadEnergia) {
    this -> CantidadEnergia = newCantidadEnergia;
}


