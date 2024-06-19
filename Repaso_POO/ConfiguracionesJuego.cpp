#include "ConfiguracionesJuego.h"

//CONSTRUCTORES
ConfiguracionesJuego::ConfiguracionesJuego() {
    ResolucionX = 1920;
    ResolucionY = 1080;
    Volumen = 100;
    Dificultad = "Normal";
}

ConfiguracionesJuego::ConfiguracionesJuego(int ResolucionX, int ResolucionY, int Volumen, std::string Dificultad) {
    this -> ResolucionX = ResolucionX;
    this -> ResolucionY = ResolucionY;
    this -> Volumen = Volumen;
    this -> Dificultad = Dificultad;
}

ConfiguracionesJuego::~ConfiguracionesJuego() {
    std::cout << "El objeto se destruyo correctamente" << std::endl;
}

//GETTERS
int ConfiguracionesJuego::getResolucionX() const {
    return ResolucionX;
}
int ConfiguracionesJuego::getResolucionY() const {
    return ResolucionY;
}
int ConfiguracionesJuego::getVolumen() const {
    return Volumen;
}
std::string ConfiguracionesJuego::getDificultad() const {
    return Dificultad;
}

//SETTERS
void ConfiguracionesJuego::setResolucionX(int newResolucionX) {
    this -> ResolucionX = newResolucionX;
}
void ConfiguracionesJuego::setResolucionY(int newResolucionY) {
    this -> ResolucionY = newResolucionY;
}
void ConfiguracionesJuego::setVolumen(int newVolumen) {
    this -> Volumen = newVolumen;
}
void ConfiguracionesJuego::setDificultad(std::string newDificultad) {
    this -> Dificultad = newDificultad;
}