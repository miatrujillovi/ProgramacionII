#include <iostream>
#include <fstream>

struct Login{
    std::string Nombre;
    std::string Correo;
    std::string Password;
};

//Funcion para verificar si el email contiene una @
bool isValidEmail(const std::string &Correo){
    return Correo.find("@");
}

int main() {

    // Instanciar estructura Login
    struct Login Usuario;

    // Llenar datos
    std::cout << "Introduce tu Nombre: ";
    std::cin >> Usuario.Nombre;
    std::cout << "\nIntroduce tu Correo: ";
    std::cin >> Usuario.Correo;
    std::cout << "\nIntroduce tu Contraseña: ";
    std::cin >> Usuario.Password;

    // Abrir el archivo y verificar si se pudo abrir
    std::fstream fln("Datos.txt");
    if (!fln.is_open()){
        std::cerr << "Error al abrir archivo" << std::endl;
    }
    // Escribir datos en el archivo
    fln << Usuario.Nombre << " " << Usuario.Correo << " " << Usuario.Password << "\r\n" << std::endl;

    // Cerrar archivo
    fln.close();

    //----------------------------------------------------------------------------------------------
    // Volvemos a abrir el archivo
    fln.open("Datos.txt");
    // Verificamos si se abrio
    if (!fln.is_open()){
        std::cerr << "Error al abrir archivo" << std::endl;
    }
    // Acomodar su informacion en struct Usuario
    // TODO: HACER CON GETLINE
    while (fln >> Usuario.Nombre >> Usuario.Correo >> Usuario.Password);

    return 0;
}
