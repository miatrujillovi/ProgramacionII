#include "Jugador.h"

//CONSTRUCTORES
Jugador::Jugador() {
    DamageJ = 10;
    Mana = 100;
}

Jugador::Jugador(int DamageJ, int Mana,
                 std::string Nombre, int Salud) : Entidad(Nombre, Salud){
    this -> DamageJ = DamageJ;
    this -> Mana = Mana;
}

Jugador::~Jugador() {
    std::cout << "Se ha eliminado el Jugador correctamente" << std::endl;
}

//METODOS
void Jugador::mostrarInformacion() {
    Entidad::mostrarInformacion();
    std::cout << "Tu daño actual es: " << DamageJ << std::endl;
    std::cout << "Tu mana actual es: " << Mana << std::endl;
}

//GETTERS
int Jugador::getDamageJ() const {
    return DamageJ;
}
int Jugador::getMana() const {
    return Mana;
}

//SETTERS
void Jugador::setDamageJ(int newDamageJ) {
    this -> DamageJ = newDamageJ;
}
void Jugador::setMana(int newMana) {
    this -> Mana = newMana;
}