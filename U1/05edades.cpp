#include <iostream>
using namespace std;

int main()
{
    int e;
    cout << "¿Cuál es tu edad? ";
    cin >> e;
    if (1 <= e && e <= 150)
    {
        if (e>=1 && e<=30)
        {
            cout << "Primera Edad ";
        } 
        else if (e>=31 && e<=60)
        {
            cout << "Segunda Edad";
        } 
        else if (e>=61 && e<=90)
        {
            cout << "Tercera Edad";
        } 
        else if (e>=91 && e<=150)
        {
            cout << "Horas Extra";
        }
    }
    else
    {
        cout << "El rango es inváldo" << endl;
    }

    return 0;
}
