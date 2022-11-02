#include <iostream>
using namespace std;

int main()
{
    int e;
    char op;
    do
    {
        cout << "Ingrese la edad del cliente"<<endl;
        cin>>e;
        if (e<4)
        {
            cout<<"La entrada es gratis"<<endl;
        }else 
            if (e<=18)
            {
                cout<<"La entrada cuesta $5"<<endl;
            }else
            {
                cout<<"La entrada cuesta $10"<<endl;
            }
        cout<<"¿Desea hacer otra consulta? (s/n)"<<endl;
        cin>>op;
    } while (op=='s');   
    return 0;
}