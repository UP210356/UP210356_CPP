# U2  
---
*01Tramos*   
```
{
    int renta, desc, impuesto;
    cout << "Ingresa tu renta anual" << endl;
    cin >> renta;

    if (renta < 10000)
    {
        cout << "Tu impuesto es del 5%";
        desc = 5;
    }
    else if (renta <= 20000)
    {
        cout << "Tu impuesto es del 10%";
        desc = 10;
    }
    else if (renta <= 35000)
    {
        cout << "Tu impuesto es del 15%";
        desc = 15;
    }
    else if (renta <= 60000)
    {
        cout << "Tu impuesto es del 30%";
        desc = 30;
    }
    else if (renta > 60000)
    {
        cout << "Tu impuesto es del 45%";
        desc = 45;
    }
    impuesto = renta * desc / 100;
    cout << " \n Debes de pagar: $ " << impuesto << endl;
    
    return 0;
}
```
![Tramos](/U2//Im%C3%A1genes/01.jpg)
---
*02Personas*   
```
{
    float p;
    int n;
    printf("¿Cual es tu puntuacion? \n");
    scanf("%f", &p);

    if (p == 0.0f || p == 0.4f || p >= 0.6f)
    {
        if (p == 0.0f)
        {
            n = 2400 * 0.0f;
            printf("Tu nivel es Inaceptable y recibiras %d $ \n", n);
        }
        else if (p == 0.4f)
        {
            n = 2400 * 0.4f;
            printf("Tu nivel es Aceptable y recibiras %d $ \n", n);
        }
        else if (p >= 0.6f)
        {
            n = 2400 * p;
            printf("Tu nivel es Meritorio y recibiras %d $ \n", n);
        }
    }

    return 0;
}
```
![Personas](/U2//Im%C3%A1genes/02.jpg)
![Personas](/U2//Im%C3%A1genes/02(1).jpg)
---
*03Juegos*   
```
{
    int e;
    char op;
    do
    {
        cout << "Ingrese la edad del cliente"<<endl;
        cin>>e;
        if (e<4)
        {
            cout<<"La entrada es gratis"<<endl;
        }else 
            if (e<=18)
            {
                cout<<"La entrada cuesta $5"<<endl;
            }else
            {
                cout<<"La entrada cuesta $10"<<endl;
            }
        cout<<"¿Desea hacer otra consulta? (s/n)"<<endl;
        cin>>op;
    } while (op=='s');   
    return 0;
}
```
![Conversion](/U2//Im%C3%A1genes/03.png)
---
*04Pizzería*   
```
{ 
   string ingr;
   string sabor = "Mozzarela, Tomate y "; 
   string extr; 
   cout << "Cómo quieres tu pizza: " <<endl; 
   cout << "Vegetariana" <<endl; 
   cout << "No Vegetariana" <<endl;
   cin >> ingr;
   if (ingr == "Vegetariana")
   {
       cout << "Elige tu ingrediente Vegetariano: " <<endl; 
       cout << "- Tofu" <<endl; 
       cout << "- Pimiento" <<endl;
       cin >> extr; 
       if (extr == "Tofu")
       {
           sabor = sabor + "Tofu"; 
       } else {
           sabor = sabor + "Pimiento";
       }
       cout << "Tu pizza es " << ingr << " con " << sabor <<endl;
   } else if (ingr == "NoVegetariana") {
   { 
       cout << "Elige tu ingrediente No Vegetariano: " <<endl; 
       cout << "- Peperoni" <<endl; 
       cout << "- Jamon" <<endl;
       cout << "- Salmon" <<endl;
       cin >> extr;
       if (extr == "Peperoni")
       {
           sabor = sabor + "Peperoni"; 
       } else 
       { if (extr == "Jamon")
       {
           sabor = sabor + "Jamon";
       } else 
       {
           sabor = sabor + "Salmon";
       }
       }
       cout << "Tu pizza es " << ingr << " con " << sabor <<endl;
   }
   }
   return 0;
}
```
![Conversion](/U2//Im%C3%A1genes/04.png)
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
    cout<<"La temperatura minima es: "<< min <<" °C \n";
    cout<<"La temperatura maxima es: "<< max <<" °C \n";
}
```
![Conversion](/U2//Im%C3%A1genes/05.png)
---
*06Precios*   
```
{
    double compras=1,total=0, cant, subtotal;
    while (compras!=0)
    {
        cout<<"Ingrese el precio de su articulo";
        cin>>compras;
        if(compras!=0)
        {
          cout<<"Cuantos articulos de estos lleva?";
        cin>>cant;  
        }
        subtotal=compras*cant;
        total=subtotal+total;
    }
    cout<<"su total es de: $"<<total;
    return 0;
}
```
![Conversion](/U2//Im%C3%A1genes/06.png)
---
*07Conversión*   
```
{
    int numero;
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
    cout << "El número " << número << "en decimal es: " << res << endl;
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
![Conversion](/U2//Im%C3%A1genes/07.png)
