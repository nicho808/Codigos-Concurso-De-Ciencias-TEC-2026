#include <iostream>

//Cetis107 Febrero 2026 - Paolo Nicholas Valdez Bernal 🦇

int main(){
    //Salida de numero
    int numero = 10;
    std::cout << numero << std::endl;

    //Salida de caracter
    char caracter = 'A';
    std::cout << caracter  << std::endl;

    //Salida de palabra
    std::string palabra = "Programacion";
    std::cout << palabra << std::endl;

    //Salida de oracion
    std::string texto = "Hola mundo!";
    std::cout << texto << std::endl;

    //Salida de varios elementos
    std::string nombre = "Manuel";
    int edad = 17;
    std::cout << "Hola mi nombre es " << nombre << " Y mi edad es " << edad << std::endl;

    //Salida de booleano
    bool booleano = true;
    std::cout << booleano << std::endl;

    //cada elemento en un mismo cout debe separarse con un par de << y la funcion std::endl imprime un salto de linea
    return 0;
}

//https://github.com/nicho808/Codigos-Concurso-De-Ciencias-TEC-2026