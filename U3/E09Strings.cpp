#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string texto = "Universidad";
    string texto2("HolA");

    cout << "Contenido: " << texto << endl;
    cout << "Lenght: " << texto.length() << endl;
    cout << "Compare " << texto.compare("universidad") << endl; //Compara longitud
    //cout << "Find: " << texto.find(a) << endl; //Regresa la posicion de la letra
    cout << "Substr: " << texto.substr(6, 4) << endl; //De la posicion 6 dame 4
    cout << "Find_last: " << texto.find_last_of("i") << endl; //La posicion final de una letra
    cout << "Replace: " << texto.replace(6,5, "vih") << endl; //Remplaza la posicion por el texto
    texto = texto + ".";
    cout << "Concatenar: " << texto << endl;
    texto.clear();
    cout << "Clear: " << texto << endl;
    texto.swap(texto2);

    return 0;
}
