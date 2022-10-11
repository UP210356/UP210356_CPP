#include <iostream>
using namespace std;

int main()
{
    float t, s, p, max, min;
    for (int i=0; i<6; i++)
    {
        cout<<"Ingrese la temperatura: \n";
        cin>>t;
        s=s+t;
        if (min>t)
        {
            min=t;
        }
        if (max<t)
        {
            max=t;
        }
    }
    p=t/6;
    cout<<"El promedio de las temperaturas es: "<< p <<" grados \n";
    cout<<"La temperatura más baja es: "<< min <<" grados \n";
    cout<<"La temperatura más alta es: "<< max <<" grados \n";
}
