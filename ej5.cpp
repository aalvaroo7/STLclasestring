#include <iostream>
#include <string>

int main() {
    // Definimos una cadena inicial
    std::string str = "Inteligencia Artificial";

    // Extraemos una subcadena de 'str' que comienza en la posición 13 y tiene una longitud de 9 caracteres
    std::string sub_str = str.substr(13, 9); // "Artificial"

    // Insertamos "La " al principio de la cadena 'str'
    std::string new_str = "La " + str; // "La Inteligencia Artificial"

    // Mostramos la subcadena y la cadena resultante
    std::cout << "Subcadena: " << sub_str << std::endl;
    std::cout << "Cadena resultante: " << new_str << std::endl;

    return 0;
}