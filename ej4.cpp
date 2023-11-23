#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string frase = "hola";
    string sub_str = "ho";
    string::size_type pos = frase.find(sub_str);
    if(pos != string::npos){
        cout << "la subcadena " << sub_str << " está en la posición " << pos << endl;
    }
    else{
        cout << "la subcadena " << sub_str << " no está en la cadena" << endl;
    }
}