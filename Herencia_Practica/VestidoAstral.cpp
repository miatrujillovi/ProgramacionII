#include "VestidoAstral.h"

//CONSTRUCTORES
VestidoAstral::VestidoAstral() {
    NombreVestido = "N/A";
    Forma = "N/A";
    Color = "N/A";
}

VestidoAstral::VestidoAstral(const VestidoAstral &rhs) {
    NombreVestido = rhs.NombreVestido;
    Forma = rhs.Forma;
    Color = rhs.Color;
}

VestidoAstral::VestidoAstral(std::string NombreVestido, std::string Forma, std::string Color) {
    this -> NombreVestido = NombreVestido;
    this -> Forma = Forma;
    this -> Color = Color;
}

//GETTERS
std::string VestidoAstral::getNombreVestido() const {
    return NombreVestido;
}
std::string VestidoAstral::getForma() const {
    return Forma;
}
std::string VestidoAstral::getColor() const {
    return Color;
}

//SETTERS
void VestidoAstral::setNombreVestido(std::string newNombreVestido) {
    this -> NombreVestido = newNombreVestido;
};
void VestidoAstral::setForma(std::string newForma) {
    this -> Forma = newForma;
};
void VestidoAstral::setColor(std::string newColor) {
    this -> Color = newColor;
};
