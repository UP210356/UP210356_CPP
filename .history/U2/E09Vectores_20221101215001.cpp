#include <iostream>
using namespace std;

int main()
{
    string cadena = "universidad";
    int longitud = cadena.length();
    char texto[20] = " Politecnica";
    int i = 0;

    int mayus = 0, minus = 0;
    int vocales = 0;
    for (int i = 0; i < longitud; i++)
    {
        cout << cadena[i] << " ";
        if (cadena[i] == 'a')
        {
            vocales++;
        }
    }

    while (texto[i] != '\0')
    {
        cout << texto[i] << " ";
        i++;
    }
    for (int i = 0; i < longitud; i++)
    {
        cout << cadena[i] << " ";
    }
    if(islower(texto[0]))
    {
        minus++;
    }
    //isdigit
    //isalmum
    //isspace
    //islower
    //isupper
    //tolower
    //toupper
    cout << "\n El numero de a son: " << vocales;
    cout << "\n. . . Hecho" << endl;
    return 0;
}