#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double xn, x1 = 4, x2 = 7, Es = .001;
    /*cout << "Dame el valor de x1 y x2 \n";
    cin >> x1;
    cin >> x2;*/
    double Er = abs(x2 -x1);
    do
    {
        xn = (x1 + x2) / 2;
        if (x1*xn < 0)
        {
            x2 = xn;
        }
        else
        {
            x1 = xn;
        }
    } while (Er > Es);
    cout << "El valor de xn = " << xn <<endl;
    return xn;
}