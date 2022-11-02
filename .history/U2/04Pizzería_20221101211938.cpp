#include <iostream>
using namespace std;

int main()
{
    char Tipo, ingrediente;
    cout << "Dime qué tipo de pizza gustas \n";
    cout << "Escribe v si es vegetariana o n si no es vegetariana \n";
    cin >> Tipo;
    if (Tipo = 'v')
    {
        cout << "Los ingredientes vegetarianos son pimiento y tofu \n";
        cout << "Escribe si prefieres pimiento o tofu: ";
        cin >> ingrediente;
        cout << "El tipo de pizza es vegetariana y el ingrediente es " << ingrediente << endl;
    }
    else if (Tipo = 'n')
    {
        cout << "Los ingredientes no vegetarianos son peperoni, jamón y salmón";
        cout << "Escribe si prefieres peperoni, jamón o salmón";
        cout << "El tipo de pizza es no vegetariana y el ingrediente es " << ingrediente << endl;
    }
    else
    {
        cout << "Escribir un tipo de pizza válido";
    }
}
