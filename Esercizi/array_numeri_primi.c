#include <stdio.h>
#include <stdlib.h>
#define lunghezza_vettore 1000

void stampa(int a[], int b)
{
    for(int i = 0; i < b; i++)
    {
        if(i%10==0)
            printf("\n\n");

        if(a[i]!=0)
            printf("%d\t", a[i]);
    }
}

int n_primo(int a)
{
    int somma=0;

    for (int i = a/2; i >= 1; i--)  // a/2 perchè un numero non ha divisori maggiori della sua metà
    {
      if(a % i == 0)
        somma += i;
    }

    // 17; somma = 1
    // 19; somma = 1
    // 23; somma = 1

    // a; somma = 1 (se il numero è primo)

    if(somma == 1)
        return 1;
    else
        return 0;
}


int main()
{
    int vet[lunghezza_vettore], vet2[lunghezza_vettore];
    int i, out = 0, puntatore = 0;

    for(i = 0; i < lunghezza_vettore; i++)
    {
        //vet[i] = (rand()%1000)+1; per accorciare il codice si può inserire direttamente nei parametri in input della funzione
        if(n_primo(vet[i] = (rand()%1000)+1)==1)
        {
            vet2[puntatore]=vet[i];
            out=1;
            puntatore++;
        }
        else
        {
          vet2[i] = 0;
        }
    }

    stampa(vet, lunghezza_vettore);

    if(out==0)
        printf("\n\nnon sono stati trovati numeri primi");
    else
    {
        printf("\n\nsono presenti numeri primi");
        stampa(vet2, puntatore);
    }
    return 0;
}
