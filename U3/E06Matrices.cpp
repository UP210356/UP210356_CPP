#include <iostream>
using namespace std;
/*
void imprimirA(int A[][], int f,int c)
{
    cout << "Matriz A" << endl;
    for (int i = 0; i < f; i++)
    {
        
    }
    
}
*/
int main ()
{
    int f, c;
    cout << "Numero de Filas: ";
    cin >> f;
    cout << "Numero de Columnas: ";
    cin >> c;
    int matriz[f][c];
    int contador = 1;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }
    return 0;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matriz[i][j], "\t";
            cout << endl;

        }
    }
}