#include <iostream>
#include "Libro.h"
using namespace std;

int main()
{
    int pesos, cantidad;
    cout<<"Ingresa la cantidad: "<<endl;
    cin>>pesos;
    if (pesos>=1000)
    {
    cantidad=pesos/1000;
    pesos%=1000;    
    cout<<"Billetes de 1000 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=500)
    {
    cantidad=pesos/500;
    pesos%=500;    
    cout<<"Billetes de 500 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=200)
    {
    cantidad=pesos/200;
    pesos%=200;    
    cout<<"Billetes de 200 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=100)
    {
    cantidad=pesos/100;
    pesos%=100;    
    cout<<"Billetes de 100 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=50)
    {
    cantidad=pesos/50;
    pesos%=50;    
    cout<<"Billetes de 50 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=20)
    {
    cantidad=pesos/20;
    pesos%=20;    
    cout<<"Billetes de 20 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=10)
    {
    cantidad=pesos/10;
    pesos%=10;    
    cout<<"Monedas de 10 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=5)
    {
    cantidad=pesos/5;
    pesos%=5;    
    cout<<"Monedas de 5 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=2)
    {
    cantidad=pesos/2;
    pesos%=2;    
    cout<<"Monedas de 2 pesos "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    if (pesos>=1)
    {
    cantidad=pesos/1;
    pesos%=1;    
    cout<<"Monedas de 1 peso "<<cantidad<<endl;
    }else{EXIT_SUCCESS;}
    return 0;
}