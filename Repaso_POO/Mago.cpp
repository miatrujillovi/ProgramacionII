#include "Mago.h"

//CONSTRUCTORES
Mago::Mago() {
    Mana = 100;
    TipoMagia = "N/A";
}

Mago::Mago(std::string Nombre, float Altura, float Peso, int NivelPersonaje,
           int Mana, std::string TipoMagia):Personaje(Nombre, Altura, Peso, NivelPersonaje){
    this -> Mana = Mana;
    this -> TipoMagia = TipoMagia;
}

Mago::~Mago() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//GETTERS
int Mago::getMana() const {
    return Mana;
}
std::string Mago::getTipoMagia() const {
    return TipoMagia;
}

//SETTERS
void Mago::setMana(int newMana) {
    this -> Mana = newMana;
}
void Mago::setTipoMagia(std::string newTipoMagia) {
    this -> TipoMagia = newTipoMagia;
}

//METODOS
void Mago::Atacar(){
    std::cout << "Has atacado con el báculo" << std::endl;
    Mana -1;
}