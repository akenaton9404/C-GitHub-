#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lunghezzavet 31
#define nelementi 5

void stampa(char a[], int b)
{   
    for(int i = 0; i < b; i++)
    {
        printf("%c ", a[i]);
    }
}

void setup(char a[], int b)
{
    int i;
    for(i = 0; i < b; i++)
    {
        a[i] = '_';
    }
    a[i] = '\0';
}

int lunghezza(char a[])
{   
    int i = 0;
    while(a[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char listaparole[nelementi][lunghezzavet] = {"suca", "erba", "cacca", "fiume", "casa"};
    char trattini[lunghezzavet], scelta;

    srand(time(NULL));
    int nparola = rand()%nelementi, i;

    int lenght = lunghezza(listaparole[nparola]);
    setup(trattini, lenght);

    int a = 0;

    while(a < lenght)
    {     
        printf("\n");
        stampa(trattini, lenght);

        fflush(stdin);
        printf("\nProva ad indovinare una lettera: ");
        scanf("%c", &scelta);

        for(i = 0; i <= lenght; i++)
        {
            if(scelta == listaparole[nparola][i])
            {
                trattini[i] = listaparole[nparola][i];
                a++;
            }   
        }
    }

    printf("\nHAI INDOVNATO LA PAROLA: %s", trattini);

    return 0;
}