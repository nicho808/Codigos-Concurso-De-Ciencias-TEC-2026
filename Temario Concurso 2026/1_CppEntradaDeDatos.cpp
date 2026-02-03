#include <iostream>
#include <string>
#include <limits>

//Cetis107 Febrero 2026 - Paolo Nicholas Valdez Bernal 🦇

int main(){
    //Entrada numerica
    int edad;
    std::cin >> edad;

    //Entrada de un caracter
    char letra;
    std::cin >> letra;

    //Entrada de una palabra (se requiere libreria String)
    std::string palabra;
    std::cin >> palabra;

    //limpieza de buffer despues de usar std::cin (se requiere libreria Limits)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //Entrada de una oracion (se requiere libreria String)
    std::string oracion;
    std::getline(std::cin, oracion);

    return 0;
}

//https://github.com/nicho808/Codigos-Concurso-De-Ciencias-TEC-2026