#include <iostream>
#include<time.h>
using namespace std;

#define f 2
#define c 3

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Generar semilla
    int n;

    int matriz[f][c];
    for ( int i = 0; i < f; i++)
    {
        for (int j = 0; i < c; j++)
        {
            n = 21 + rand() % (10);
            matriz[i][j] = n;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "transpuesta" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            cout << matriz[i][j];
        }
        
    }
    
    return 0;
}