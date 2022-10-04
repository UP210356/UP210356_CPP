#include <iostream>
using namespace std;

int main()
{
    int renta;
    int impuesto;
    cout << "¿Cuánto pagas de renta? ";
    cin >> renta;
    if (renta < 10000)
    {
        cout << "El impuesto que pagarás será de 5%";
    }
    else if (renta>=10000 && renta<20000)
    {
        cout << "El impuesto que pagarás será de 5%";
    }
    else if (renta>=20000 && renta<35000)
    {
        cout << "El impuesto que pagarás será de 15%";
    }
    else if (renta>=35000 && renta<60000)
    {
        cout << "El impuesto que pagarás será de 20%";
    }
    else if (renta>=35000 && renta<60000)
    {
        cout << "El impuesto que pagarás será de 30%";
    }
    else if (renta>=60000)
    {
        cout << "El impuesto que pagarás será de 45%";
    }
    return 0;
}
