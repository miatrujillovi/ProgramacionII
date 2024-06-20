#include "Enemigo.h"

//CONSTRUCTORES
Enemigo::Enemigo() {
    DamageE = 5;
    Armadura = 5;
}

Enemigo::Enemigo(int DamageE, int Armadura,
                 std::string Nombre, int Salud) : Entidad(Nombre, Salud){
    this -> DamageE = DamageE;
    this -> Armadura = Armadura;
}

Enemigo::~Enemigo() {
    std::cout << "Se ha eliminado el Enemigo correctamente" << std::endl;
}

//METODOS
void Enemigo::mostrarInformacion() {
    std::cout << "Tu nombre es " << getNombre() << std::endl;
    std::cout << "Tu salud es " << getSalud() << std::endl;
    std::cout << "Tu daño actual es " << DamageE << std::endl;
    std::cout << "Tu armadura actual es " << Armadura << std::endl;
}

//GETTERS
int Enemigo::getDamageE() const {
    return DamageE;
}
int Enemigo::getArmadura() const {
    return Armadura;
}

//SETTERS
void Enemigo::setDamageE(int newDamageE) {
    this -> DamageE = newDamageE;
}
void Enemigo::setArmadura(int newArmadura) {
    this -> Armadura = newArmadura;
}