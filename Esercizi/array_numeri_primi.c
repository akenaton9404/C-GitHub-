#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lunghezza_vettore 1000

void stampa(int a[], int b)
{
    for(int i = 0; i < b; i++)
    {
        if(!(i%10)) 
            printf("\n\n");

        if(a[i]) // = if(a[i] != 0)
            printf("%d\t", a[i]);
    }
}

int n_primo(int a)
{
    int somma = 0;

    for (int i = a/2; i >= 1; i--)  // a/2 perchè un numero non ha divisori maggiori della sua metà
    {
      if(!(a % i))
      {
        somma += i;
        i = 0;
      }
    }

    if(somma == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int vet_rand[lunghezza_vettore], vet_primi[lunghezza_vettore];
    int i, out = 0, puntatore = 0;

    srand(time(NULL));

    for(i = 0; i < lunghezza_vettore; i++)
    {
        vet_rand[i] = (rand()%1000)+1;

        if(n_primo(vet_rand[i])) //in assembly gli if vengono eseguiti il la codizione è diversa da 0. Nel nostro caso deve eseguire se la funzione ritorna 1
        {
            vet_primi[puntatore] = vet_rand[i];
            out = 1;
            puntatore++;
        }
        else
          vet_primi[i] = 0;
    }

    stampa(vet_rand, lunghezza_vettore);

    if(out)
    {
        printf("\n\n==========================\nsono presenti numeri primi\n==========================");
        stampa(vet_primi, puntatore);
    }
    else
        printf("\n\n===================================\nnon sono stati trovati numeri primi\n===================================");

    
    return 0;
}
