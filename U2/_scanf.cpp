#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i != 3)
        {
            printf("Contador %d \n", i);
        }
        s = s + i;
    }
    printf("El resultado de la suma de %d numeros es %d \n", n, s);
    return 0;
}
