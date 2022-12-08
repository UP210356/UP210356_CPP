# U4 
---
*Juego*   
Leonardo Millán Jiménez -- Gabriel Hernández Rivera
```
{
    char matriz[3][3];
    int i, j, f, c, g = 0, t = 1;
    printf("Filas: 0, 1, 2\n");
    printf("Columnas: 0, 1, 2\n");
    do
    {
        if (t % 2 == 1)
        {
            do
            {
                printf("Jugador 1: \n");
                printf("Digite la fila: \n");
                scanf("%d", &f);
                printf("Digite la columna: \n");
                scanf("%d", &c);
                if (matriz[f][c] == 'x' || matriz[f][c] == 'o' || f > 2 || c > 2)
                {
                    printf("Coordenadas no validas, pruebe otra vez\n");
                }
            } while (matriz[f][c] == 'x' || matriz[f][c] == 'o' || f > 2 || c > 2);
            matriz[f][c] = 'x';
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("[%c]", matriz[i][j]);
                }
                printf("\n");
            }
            t++;
        }
        else if (t % 2 == 0)
        {
            do
            {
                printf("Jugador 2: \n");
                printf("Digite la fila: \n");
                scanf("%d", &f);
                printf("Digite la columna: \n");
                scanf("%d", &c);
                if (matriz[f][c] == 'x' || matriz[f][c] == 'o' || f > 2 || c > 2)
                {
                    printf("Coordenadas no validas, pruebe otra vez\n");
                }
            } while (matriz[f][c] == 'x' || matriz[f][c] == 'o' || f > 2 || c > 2);
            matriz[f][c] = 'o';
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("[%c]", matriz[i][j]);
                }
                printf("\n");
            }
            t++;
        }
        if (matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] || matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] || matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

            || matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] || matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] || matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

            || matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] || matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0])
        {
            g = 1;
            printf("Gano el jugador 1\n");
        }
        if (matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] || matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] || matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

            || matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] || matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] || matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

            || matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] || matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0])
        {
            g = 1;
            printf("Gano el jugador 2\n");
        }
    } while (g != 1);
    return 0;
}
```
![Juego](/U4//Im%C3%A1genes/Juego.png)
