#include <iostream>
using namespace std;

int main()
{
    int e;
    char op;
    cout<<"Ingrese la edad del cliente \n";
    cin>>e;
    if (e>0 && e<100)
    {
        if (e<4)
        {
        cout<<"La entrada es gratis \n";
        }
        else if (e<=18)
        {
            cout<<"La entrada cuesta $5 \n";
        }
        else if (e>18)
        {
            cout<<"La entrada cuesta $10 \n";
        }
    }
    else
    {
        cout<<"Ingresa una edad válida \n";
    }
        
}
