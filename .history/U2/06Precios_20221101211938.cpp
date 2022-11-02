#include <iostream>
using namespace std;

int main()
{
    int d, c;
    float p, s;
    cout<<"Ingrese la cantidad de productos \n";
    cin>>c;
  do
    {
        cout<<"Ingrese el precio del producto \n";
        cin>>p;
        s=s+p;
    } while (c!=0);
    cout<<"El total a pagar es: "<<s;
}
