#include <iostream>
using namespace std;

int main()
{
    int numro;
    string res;
    cout << "Depositar un número en decimal: ";
    cin >> numero; 
    do
    {
        if (numero > 0)
        {
            while (numero != 0)
            {
                res = (numero % 2 == 0) ? "0" + res : "1" + res;

                numero /= 2;
            }
    cout << "E lnúmero en binario es: " << res << endl;
        }
        else if (numero == 0)
        {
        cout << "Por favor introducir un número mayor a 0" <<endl;
        }

        // Line break
        cout << "\n";
    } while (numero < 0);

    return 0;
}
