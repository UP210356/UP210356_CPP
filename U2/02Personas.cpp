#include <iostream>
using namespace std;

int main()
{
    float p, s;
    cout << "Escribe la puntuación del nivel (0.0, 0.4 y 0.6 o más)\n";
    cin >> p;
    if (p == 0.0 || p == 0.4 || p >= 0.6)
    {
        if (p == 0.0)
        {
            cout << "El nivel de rendimiento es inaceptable\n";
        }
        else if (p == 0.4)
        {
            cout << "El nivel de rendimiento es aceptable\n";
        }
        else if (p >= 0.6)
        {
            cout << "El nivel de rendimiento es meritorio\n";
        }
        s = p * 2400;
        cout << "La cantidad de dinero que recibirá seá de " << s << endl;
    }
    else
    {
        cout << "Ingresa un dato válido\n";
    }
}
