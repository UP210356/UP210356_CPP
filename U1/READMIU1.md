# U1   
---
**01Hola**   
```
{
    cout << "Hola Mundo";
    return 0;
}
```
![Hola Mundo](/U1/Imágenes/Hola Mundo.png)
---
**02ParImpar**   
```
{
    cout <<"Par o Impar" <<endl<<"\n";
    return 0;
    getchar ();
}
```
![ParImpar](/U1/Imágenes/ParImpar.png)
---
**03TiposDatos**   
```
{
    int entero = 28970983928;
    float flotante = 3.321;
    double grande = 5.7665764534;
    char caracter ='L';

    cout << "Este progrma muestra los tipos de datos- \n";
    cout << "El número entero es: "<< entero << endl;
    cout << "El tamaño del entero es: " <sizeof(entero) < "bytes" <<endl;


   getchar();
   return 0;
}
```
---
**04Scanf**   
```
{
    int s = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i != 3)
        {
            printf("Contador %d \n", i);
        }
        s = s + i;
    }
    printf("El resultado de la suma de %d numeros es %d \n", n, s);
    return 0;
}
```
![Contador](/U1/Imágenes/Contador.png)
---
**05Edades**   
```
{
    int e;
    cout << "¿Cuál es tu edad? ";
    cin >> e;
    if (1 <= e && e <= 150)
    {
        if (e>=1 && e<=30)
        {
            cout << "Primera Edad ";
        } 
        else if (e>=31 && e<=60)
        {
            cout << "Segunda Edad";
        } 
        else if (e>=61 && e<=90)
        {
            cout << "Tercera Edad";
        } 
        else if (e>=91 && e<=150)
        {
            cout << "Horas Extra";
        }
    }
    else
    {
        cout << "El rango es inváldo" << endl;
    }

    return 0;
}
```
![Edades](/U1/Imágenes/Edades.png)