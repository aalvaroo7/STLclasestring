
#include <iostream>
#include <vector>
#include <string>
using namespace std;
    int main() {
       string sentence = "OpenAI is a leading AI research lab.";
       cout << "Cadena: " << sentence << std::endl;
        cout << "Tamaño de la cadena: " << sentence.size() << std::endl;
        cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;
        return 0;

    }
