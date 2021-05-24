#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3
#define m 4

void riempimento(int matrice [n][m])
{
    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            matrice[i][j] = rand()%99 + 1;
        }
    }
}

int max(int matrice[n][m])
{
    int indice = 100;
    int nummax = matrice[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrice[i][j] > nummax)
            {
                nummax = matrice[i][j];
                indice = i * 10 + j;
            }
        }
    }

    return indice;
}

int min(int matrice[n][m])
{
    int indice = 100;
    int nummin = matrice[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrice[i][j] < nummin)
            {
                nummin = matrice[i][j];
                indice = i * 10 + j;
            }
        }
    }

    return indice;
}

int main()
{
    int matrice[n][m];

    riempimento(matrice);

    int nummax = max(matrice);
    printf("Posizione nella matrice del numero maggiore = %d, %d", nummax/10, nummax%10);
        
}