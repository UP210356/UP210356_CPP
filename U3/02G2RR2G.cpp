#include <iostream>
#include <cmath>
#include "Libro.h"

using namespace std;

double G2R(double a)
{
    double r;
    r = a * M_PI / 180;
    return r;
}
double sen(double a)
{
    return sin(G2R(a));
}
int main()
{
    double a = 45;
    cout << sen(a) << endl;
    return 0;
}

bool esBisiesto(int ano)
{
    bool r = true;
    ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
    return r;
}