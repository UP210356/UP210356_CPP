# U3 
---
*01Bisección*   
```
double fnEcuacion1(double x)
{ 
    // x^2-8x+15
    double y;
    y = pow(x, 2) - 8 * x + 15;
    return y;
}

int main()
{
    double x1=4;
    double x2=7;
    double xm;
    double es=.00000001;
    double er=abs(x2-x1);

    int i=1;
    while (er > es)
    {
        xm=(x1+x2)/2;
        if ((fnEcuacion1(x1)*fnEcuacion1(xm))<0)
        {
            x2=xm;
        }else 
        {
            x1=xm;
        }
        er=abs(x2-x1);
        i=i+1;
    }
    
    cout << xm << endl;
    cout << "Corrió " << i << " veces" << endl;
    return 0;
}
```
![Bisección](/U3//Im%C3%A1genes/01.png)
---
*02Bisiesto*   
```
bool esBisiesto(int ano)
{
    bool r = true;
    r = ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0;
    return r;
}

int main()
{
    cout << esBisiesto(2012) << endl;
    return 0;
}
```
![Bisiesto](/U3//Im%C3%A1genes/02.png)
---
*03Coseno*   
```
{
    int i, j, n, exp = 0, signo = -1;
    float x;
    double r = 0, factorial = 1;
    cout << "Valor en radianes para sacar coseno: " << endl;
    cin >> x;
    cout << "Cuantos terminos? " << endl;
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= exp; j++)
            factorial = factorial * j;
            signo = signo * -1;
            r = r + (signo * pow(x, exp) / factorial);
            cout << r << endl;
            exp = exp + 2;
    }
    cout << "El coseno del angulo es: " << r << endl;
    return 0;
}
```
![Coseno](/U3//Im%C3%A1genes/03.png)
---
*04DesviaciónStd*   
```
{
    int n, i;
    float p = 0.0, m = 0.0, E = 0.0, mu = 0.0;
    cout << "Cuantos datos va a ingresar? :" << endl;
    cin >> n;
    cout << "Introduce los " << n << " numeros :" << endl;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        m += num[i];
    }

    m = m / n;

    for (i = 0; i < n; i++)
    {
        E += pow(num[i] - m, 2);
    }
    p = sqrt(E / n);
    mu = sqrt(E / (n-1));
    cout << "La media es: " << m << endl;
    cout << "La desviacion estandar de poblacion es " << p << endl;
    cout << "La desviacion estandar de una muestra es " << mu << endl;
    return 0;
}
```
![DesviacionStd](/U3//Im%C3%A1genes/04.png)
---
*05Moneda*   
```
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
```
![Moneda](/U3//Im%C3%A1genes/05.png)
---
*06ArábigosRom*   
```
{
	while(1)
	{
		int numero,unidades,decenas,centenas,millares;
		
		cout << "Ingresa un numero entre para convertirlo a romano: ";
		cin >> numero;
		
		unidades = numero%10; numero /= 10;
		decenas = numero%10; numero /= 10;
		centenas = numero%10; numero /= 10;
		millares = numero%10; numero /= 10;
		
		switch(millares)
		{
			case 1: cout << "M"; break;
			case 2: cout << "MM"; break;
			case 3: cout << "MMM"; break;
		}
		
		switch(centenas)
		{
			case 1: cout << "C"; break;
			case 2: cout << "CC"; break;
			case 3: cout << "CCC"; break;
			case 4: cout << "CD"; break;
			case 5: cout << "D"; break;
			case 6: cout << "DC"; break;
			case 7: cout << "DCC"; break;
			case 8: cout << "DCCC"; break;
			case 9: cout << "CM"; break;
		}
		
		switch(decenas)
		{
			case 1: cout << "X"; break;
			case 2: cout << "XX"; break;
			case 3: cout << "XXX"; break;
			case 4: cout << "XL"; break;
			case 5: cout << "L"; break;
			case 6: cout << "LX"; break;
			case 7: cout << "LXX"; break;
			case 8: cout << "LXXX"; break;
			case 9: cout << "XC"; break;
		}
		
		switch(unidades)
		{
			case 1: cout << "I"; break;
			case 2: cout << "II"; break;
			case 3: cout << "III"; break;
			case 4: cout << "IV"; break;
			case 5: cout << "V"; break;
			case 6: cout << "VI"; break;
			case 7: cout << "VII"; break;
			case 8: cout << "VIII"; break;
			case 9: cout << "IX"; break;
		}
		
	}
	return 0;
}
```
![ArabigosRom](/U3//Im%C3%A1genes/06.png)
---
*07RFC*   
```
{
    string nombre, apellidop, apellidom, año, mes, dia, rfc;
    cout << "Introduce los datos solicitados a continuacion " << endl;
    cout << "Ingresa tu nombre: " << endl;
    cin >> nombre;
    cout << "Ingresa tu apellido paterno: " << endl;
    cin >> apellidop;
    cout << "Ingresa tu apellido materno: " << endl;
    cin >> apellidom;
    cout << "Ingresa año de nacimiento: " << endl;
    cin >> año;
    cout << "Ingresa mes de nacimiento: " << endl;
    cin >> mes;
    cout << "Ingresa dia de nacimiento: " << endl;
    cin >> dia;
    rfc = apellidop.substr(0, 2);
    rfc = rfc + apellidom.substr(0, 1);
    rfc = rfc + nombre.substr(0, 1);
    rfc = rfc + año;
    rfc = rfc + mes;
    rfc = rfc + dia;
    cout << "El RFC es: " << rfc << endl;
    return 0;
}
```
![RFC](/U3//Im%C3%A1genes/07.png)
---
*08Ascendente*   
```
{
    int arr[] = { 3, 5, 2, 4, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    std::sort(arr, arr + n);
 
    for (int const &i: arr) {
        std::cout << i << ' ';
    }
 
    return 0;
}
```
![Ascendente](/U3//Im%C3%A1genes/08.png)
Este método ordena los números dados de menor a mayor, si el número es menor pasa a la primera   
posición utilizando el array
---
*09Recursiva*   
```
int main()
{
    int n, r;
    cout << "FACTORIAL : Escribe un numero : ";
    cin >> n;
    r = factorial(n);
    cout << n << "! = " << r << endl;
}

int factorial(int n)
{
    if (n < 0)
        return 0;
    else if (n > 1)
        return n * factorial(n - 1); // Recursividad: n>1
    return 1; // Condición para n == 1 y n == 0
}
```
![Recursiva](/U3//Im%C3%A1genes/09.png)
Esta fucion recursiva para numeros negativos devuelve 0, para el 0 y 1 devuelve 1 y para los demas   
aplica la recursividad multiplicando como normalmente se sacaria el factorial   
