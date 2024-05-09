#ifndef PROGRAMACIONII_CHARCELL_H
#define PROGRAMACIONII_CHARCELL_H

class CharCell{
public:
    // CONSTRUCTORES
    CharCell(); //Implicito
    CharCell(const CharCell &rhs); //Por Copia
    CharCell(char Cara); //Por Parametros
    ~CharCell() = default; //Destructor

    // SOBRECARGAS DE OPERADORES
    // Operadores de Asignacion
    CharCell &operator= (const CharCell &rhs);
    CharCell &operator= (const char Primitive);
    // Operadores de Comparacion
    bool operator== (const CharCell &rhs);
    bool operator== (const char Primitive);
    bool operator!= (const CharCell &rhs);
    bool operator!= (const char Primitive);

private:
    char Cara;
};

#endif //PROGRAMACIONII_CHARCELL_H
