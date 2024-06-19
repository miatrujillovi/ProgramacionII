#ifndef REPASO_POO_CONFIGURACIONESJUEGO_H
#define REPASO_POO_CONFIGURACIONESJUEGO_H
#include <iostream>
#include <string>

class ConfiguracionesJuego {
public:
    //CONSTRUCTORES
    ConfiguracionesJuego(); //Implicito
    ConfiguracionesJuego(int ResolucionX, int ResolucionY, int Volumen, std::string Dificultad); //Por Parametros
    virtual ~ConfiguracionesJuego(); //Destructor

    //GETTERS Y SETTERS
    int getResolucionX() const;
    void setResolucionX(int newResolucionX);
    int getResolucionY() const;
    void setResolucionY(int newResolucionY);
    int getVolumen() const;
    void setVolumen(int newVolumen);
    std::string getDificultad() const;
    void setDificultad(std::string newDificultad);

private:
    int ResolucionX;
    int ResolucionY;
    int Volumen;
    std::string Dificultad;
};


#endif //REPASO_POO_CONFIGURACIONESJUEGO_H
