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
    cout << "Su total es de: " << s << endl;
    return 0;
}