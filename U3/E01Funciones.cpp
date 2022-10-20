#include <iostream>
#include <cmath>
using namespace std;

const double e = 2.718282;

int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}

int sumatoria(int n)
{
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        r = 1 + i;
    }
    return r;
}

double Ec(int x)
{
    double r;
    r = pow(x, 2) - 8 * x + 15;
    return r;
}

double Ec2(double x)
{
    double y;
    y = pow(e, -x) + 4 * pow(x, 3) - 5;
    return y;
}
string camello(string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i = toupper(x[i])];
        } else 
        {
            x[i] = tolower(x[i]);
        }
    }
    
}


int main()
{
    int n = 10;
    int x = doble(5);
    x = sumatoria(10);
    // cout << "La sumatoria de " << n << " es: " << x << endl;

    /*
    for (int i = 0; i <= 10; i++)
    {
        x = Ec(i);
        cout << "\n El resultado es: " << x;
    }
    cout << "\n";
    */

    for (int i = 0; i <= 10; i++)
    {
        x = Ec2(i);
        cout << "\n El resultado es: " << x;
    }

    string res = camello("Upa");
    cout << res << endl;
    
    return 0;
}