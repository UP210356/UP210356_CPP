#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string nombre, apellidop, apellidom, año, mes, dia, rfc;
    cout << "Introduce los datos solicitados a continuacion " << endl;
    cout << "Ingresa tu nombre: " << endl;
    cin >> nombre;
    cout << "Ingresa tu apellido paterno: " << endl;
    cin >> apellidop;
    cout << "Ingresa tu apellido materno: " << endl;
    cin >> apellidom;
    cout << "Ingresa año de nacimiento: " << endl;
    cin >> año;
    cout << "Ingresa mes de nacimiento: " << endl;
    cin >> mes;
    cout << "Ingresa dia de nacimiento: " << endl;
    cin >> dia;
    rfc = apellidop.substr(0, 2);
    rfc = rfc + apellidom.substr(0, 1);
    rfc = rfc + nombre.substr(0, 1);
    rfc = rfc + año;
    rfc = rfc + mes;
    rfc = rfc + dia;
    cout << "El RFC es: " << rfc << endl;
    return 0;
}