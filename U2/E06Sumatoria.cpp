#include <iostream>
using namespace std;

int main()
{
    int n = 1, s;
    while (n <= 10)
    {
        s = s + n;
        n++;
    }
    cout << "La sumaroria es: " << s << endl;
    return 0;
}