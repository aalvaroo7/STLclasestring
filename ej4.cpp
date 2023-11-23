#include <iostream>
#include <string>

int main() {
    // Definimos la cadena inicial
    std::string frase = "hola";

    // Definimos la subcadena que queremos buscar y reemplazar
    std::string sub_str = "ho";

    // Buscamos la posición de la subcadena en la cadena principal
    std::string::size_type pos = frase.find(sub_str);

    if (pos != std::string::npos) {
        // Imprimimos la posición si la subcadena se encuentra en la cadena principal
        std::cout << "La subcadena '" << sub_str << "' está en la posición " << pos << std::endl;

        // Reemplazamos la subcadena encontrada por otra subcadena
        std::string nueva_subcadena = "hi";
        frase.replace(pos, sub_str.length(), nueva_subcadena);

        // Mostramos la cadena resultante después del reemplazo
        std::cout << "Cadena resultante: " << frase << std::endl;
    } else {
        // Imprimimos un mensaje si la subcadena no se encuentra en la cadena principal
        std::cout << "La subcadena '" << sub_str << "' no está en la cadena" << std::endl;
    }

    return 0;
}