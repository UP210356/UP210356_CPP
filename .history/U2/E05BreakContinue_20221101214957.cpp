#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            break; //continue;
        }
        else
        {
            cout << i << endl;
        }
        cout<<"El siguiente número \n";
    }
    //El continue se regresa hasta el inicio del proceso
    //El break hace que se termine el proceso
    return 0;
}