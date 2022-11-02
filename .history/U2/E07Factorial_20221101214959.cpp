#include <iostream>
using namespace std;

int main()
{
    int f = 1, m = 1;
    while (m <= 10)
    {
        f=f*m;
        m++;
    }
    cout << "El factorial de 10 es: " << f << endl;
    return 0;
}