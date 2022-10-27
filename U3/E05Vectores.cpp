#include <iostream>
using namespace std;

int main()
{
    // cin << cal[x] << endl;
    /*int cal[5];
    cal[0] = 10;
    cal[1] = 9;
    */
    double total = 0;
    double cal2[] = {10, 5, 6, 8, 7};
    double n = 5;
    for (int i = 0; i <= n; i++)
    {
        total = total + cal2[i];
    }
    double promedio = total / n;
    cout << promedio << endl;
    return 0;
}