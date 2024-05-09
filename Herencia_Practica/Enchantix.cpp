#include "Enchantix.h"

//CONSTRUCTORES
Enchantix::Enchantix() : Charmix() {
    PolvoHadas = true;
    Mini = false;
    Healing = false;
}

Enchantix::Enchantix(const Enchantix &rhs) {
    PolvoHadas = rhs.PolvoHadas;
    Mini = rhs.Mini;
    Healing = rhs.Healing;
}

Enchantix::Enchantix(std::string Nombre, int Edad, int Altura, int Peso, std::string TipoSangre,
                     std::string ATKOfensivo, std::string ATKDefensivo, int CantidadEnergia,
                     bool PolvoHadas, bool Mini, bool Healing) : Charmix(Nombre, Edad, Altura, Peso, TipoSangre, ATKOfensivo, ATKDefensivo, CantidadEnergia){
    this -> PolvoHadas = PolvoHadas;
    this -> Mini = Mini;
    this -> Healing = Healing;
}

//GETTERS
bool Enchantix::getPolvoHadas() const {
    return PolvoHadas;
}
bool Enchantix::getMini() const {
    return Mini;
}
bool Enchantix::getHealing() const {
    return Healing;
}

//SETTERS
void Enchantix::setPolvoHadas(bool newPolvoHadas) {
    this -> PolvoHadas = newPolvoHadas;
};
void Enchantix::setMini(bool newMini) {
    this -> Mini = newMini;
};
void Enchantix::setHealing(bool newHealing) {
    this -> Healing = newHealing;
};
