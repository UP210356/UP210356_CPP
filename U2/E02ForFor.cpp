#include <iostream>
using namespace std;

int main()
{
    int r;
    for (int i = 1; i <= 10; i++)
    {

        for (int n = 1; n <= 10; n++)
        {
            r = n * i;
            printf("El resultado de la multiplicación de %d y %d es: %d \n", i, n, r);
        }
    }
    return 0;
}
