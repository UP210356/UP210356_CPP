//Objetivo: Tabla de multiplicar con ciclos
#include <iostream>
using namespace std;

int main()
{
    //Ciclo for
    int n=5;
    int r;
    for (int i = 1; i <= 10; i++)
    {
        r = n*i;
        cout <<"El resultado de la multiplicación de %d y %d es: %d", &i, &n, &r;

    }
    
    return 0;
}