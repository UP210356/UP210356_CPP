#include <stdio.h>
#include <iostream>
using namespace std;

char matriz[3][3];
int i, j, f, c, t = 1;

int ganador(int x)
{
    int g = 0;
    if (matriz[0][0] == 'x' && matriz[0][1] == 'x' && matriz[0][2] == 'x' || matriz[1][0] == 'x' && matriz[1][1] == 'x' && matriz[1][2] == 'x' || matriz[2][0] == 'x' && matriz[2][1] == 'x' && matriz[2][2] == 'x'

            || matriz[0][0] == 'x' && matriz[1][0] == 'x' && matriz[2][0] == 'x' || matriz[0][1] == 'x' && matriz[1][1] == 'x' && matriz[2][1] == 'x' || matriz[0][2] == 'x' && matriz[1][2] == 'x' && matriz[2][2] == 'x'

            || matriz[0][0] == 'x' && matriz[1][1] == 'x' && matriz[2][2] == 'x' || matriz[0][2] == 'x' && matriz[1][1] == 'x' && matriz[2][0] == 'x')
        {
            g = 1;
            printf("Gano el jugador 1\n");
        }
        if (matriz[0][0] == 'o' && matriz[0][1] == 'o' && matriz[0][2] == 'o' || matriz[1][0] == 'o' && matriz[1][1] == 'o' && matriz[1][2] == 'o' || matriz[2][0] == 'o' && matriz[2][1] == 'o' && matriz[2][2] == 'o'

            || matriz[0][0] == 'o' && matriz[1][0] == 'o' && matriz[2][0] == 'o' || matriz[0][1] == 'o' && matriz[1][1] == 'o' && matriz[2][1] == 'o' || matriz[0][2] == 'o' && matriz[1][2] == 'o' && matriz[2][2] == 'o'

            || matriz[0][0] == 'o' && matriz[1][1] == 'o' && matriz[2][2] == 'o' || matriz[0][2] == 'o' && matriz[1][1] == 'o' && matriz[2][0] == 'o')
        {
            g = 1;
            printf("Gano el jugador 2\n");
        }
        return g;
}

int main()
{
    printf("Filas: 0, 1, 2\n");
    printf("Columnas: 0, 1, 2\n");
    do
    {
        if (t % 2 == 1)
        {
            do
            {
                printf("Jugador 1: \n");
                printf("Fila: \n");
                scanf("%d", &f);
                printf("Columna: \n");
                scanf("%d", &c);
                if (matriz[f][c] == 'x' || matriz[f][c] == 'o' || f > 2 || c > 2)
                {
                    printf("No válido, ingresa otros datos\n");
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
    }while (ganador(0) != 1);
    return 0;
}