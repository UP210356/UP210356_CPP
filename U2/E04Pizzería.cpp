#include <iostream>
using namespace std;

int main()
{
    char Tipo, ingrediente;
    cout <<"Dime qué tipo de pizza gustas \n";
    cout <<"Escribe vegetariana o no vegetariana \n";
    cin >> Tipo;
    if (Tipo='vegetariana')
    {
        cout << "Los ingredientes vegetarianos son pimiento y tofu \n";
        cout << "Escribe si prefieres pimiento o tofu";
        cin >> ingrediente;
        cout << "El tipo de pizza es vegetariana y el ingrediente es %c", ingrediente;
    }
    else if (Tipo='no vegetariana')
    {
        cout << "Los ingredientes no vegetarianos son peperoni, jamón y salmón";
        cout << "Escribe si prefieres peperoni, jamón o salmón";
        cout << "El tipo de pizza es no vegetariana y el ingrediente es %c", ingrediente;
    }
    else
    {
        cout << "Escribir un tipo de pizza válido";
    }
}