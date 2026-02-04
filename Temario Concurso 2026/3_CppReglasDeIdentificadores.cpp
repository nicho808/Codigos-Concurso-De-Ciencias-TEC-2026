#include <iostream>

//Cetis107 Febrero 2026 - Paolo Nicholas Valdez Bernal 🦇

int main(){
    //Identificador empezando con letra
    int numero = 10;
    std::cout<<numero<<std::endl;

    //Identificador empezando con guion bajo
    char _letra = 'Z';
    std::cout<<_letra<<std::endl;

    // Identificador con guion bajo en medio
    std::string primer_nombre = "Jorge";
    std::cout<<primer_nombre<<std::endl;

    //Identificador con numero
    int numero_2 = 5;
    std::cout<<numero_2<<std::endl;

    //Identificadores diferentes por la mayuscula
    int edad = 17;
    int Edad = 30;
    int EDAD = 20;
    std::cout<<edad<<" "<<Edad<<" "<<EDAD<<std::endl;

    /*Algunos ejemplos de identificadores invalidos son los siguientes:
    19Febrero (Inicia con numero)
    edad-nombre (Contiene un guion regular)
    int (es una palabra clave de C++)
    p@ulnu# (Contiene caracteres especiales)*/

    return 0;
}

//https://github.com/nicho808/Codigos-Concurso-De-Ciencias-TEC-2026