# U2  
---
*01Tramos*   
```
{
    int renta;
    int impuesto;
    cout << "¿Cuánto pagas de renta? ";
    cin >> renta;
    if (renta < 10000)
    {
        cout << "El impuesto que pagarás será de 5%";
    }
    else if (renta>=10000 && renta<20000)
    {
        cout << "El impuesto que pagarás será de 5%";
    }
    else if (renta>=20000 && renta<35000)
    {
        cout << "El impuesto que pagarás será de 15%";
    }
    else if (renta>=35000 && renta<60000)
    {
        cout << "El impuesto que pagarás será de 20%";
    }
    else if (renta>=35000 && renta<60000)
    {
        cout << "El impuesto que pagarás será de 30%";
    }
    else if (renta>=60000)
    {
        cout << "El impuesto que pagarás será de 45%";
    }
    return 0;
}
```
![Tramos](/U1/Imágenes/ParImpar.png)
---
*02Personas*   
```
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
```
![Persona](/U1/Imágenes/ParImpar.png)
---
*03Juegos*   
```
{
    int e;
    char op;
    cout<<"Ingrese la edad del cliente \n";
    cin>>e;
    if (e>0 && e<100)
    {
        if (e<4)
        {
        cout<<"La entrada es gratis \n";
        }
        else if (e<=18)
        {
            cout<<"La entrada cuesta $5 \n";
        }
        else if (e>18)
        {
            cout<<"La entrada cuesta $10 \n";
        }
    }
    else
    {
        cout<<"Ingresa una edad válida \n";
    }
        
}
```
![Juegos](/U1/Imágenes/ParImpar.png)
---
*04Pizzería*   
```
{
    char Tipo, ingrediente;
    cout << "Dime qué tipo de pizza gustas \n";
    cout << "Escribe v si es vegetariana o n si no es vegetariana \n";
    cin >> Tipo;
    if (Tipo = 'v')
    {
        cout << "Los ingredientes vegetarianos son pimiento y tofu \n";
        cout << "Escribe si prefieres pimiento o tofu: ";
        cin >> ingrediente;
        cout << "El tipo de pizza es vegetariana y el ingrediente es " << ingrediente << endl;
    }
    else if (Tipo = 'n')
    {
        cout << "Los ingredientes no vegetarianos son peperoni, jamón y salmón";
        cout << "Escribe si prefieres peperoni, jamón o salmón";
        cout << "El tipo de pizza es no vegetariana y el ingrediente es " << ingrediente << endl;
    }
    else
    {
        cout << "Escribir un tipo de pizza válido";
    }
}
```
![Pizzería](/U1/Imágenes/ParImpar.png)
---
*05Temperatura*   
```
{
    float t, s, p, max, min;
    for (int i=0; i<6; i++)
    {
        cout<<"Ingrese la temperatura: \n";
        cin>>t;
        s=s+t;
        if (min>t)
        {
            min=t;
        }
        if (max<t)
        {
            max=t;
        }
    }
    p=t/6
    cout<<"El promedio de las temperaturas es: "<< p <<" grados \n";
    cout<<"La temperatura más baja es: "<< min <<" grados \n";
    cout<<"La temperatura más alta es: "<< max <<" grados \n";
}
```
![Temperatura](/U1/Imágenes/ParImpar.png)
---
*06Precios*   
```
{
    int d, c;
    float p, s;
    cout<<"Ingrese la cantidad de productos \n";
    cin>>c;
  do
    {
        cout<<"Ingrese el precio del producto \n";
        cin>>p;
        s=s+p;
    } while (c!=0);
    cout<<"El total a pagar es: "<<s;
}
```
![Precios](/U1/Imágenes/ParImpar.png)
---
*07Conversión*   
```
{
    int numro;
    string res;
    cout << "Ingrese el número binario a convertir: ";
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
    cout << "El número en binario es: " << res << endl;
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
```
![Conversion](/Descargas/07.png)
