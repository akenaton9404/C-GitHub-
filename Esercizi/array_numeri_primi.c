#include <stdio.h>
#include <stdlib.h>
#define lunghezza_vettore 1000

void stampa(int a[])
{
    for(int i = 0; i<lunghezza_vettore; i++)
    {
        if(i%10==0)
            printf("\n\n");
        
        printf("%d\t", a[i]);
    }
}

int n_primo(int a)
{
    int somma=0;

    for (int i=a; i>=1; i--)
    {
      if(a%i==0)
        somma += i;
    }  
    
    if(somma==a+1)
        return 1;
    else 
        return 0;
}


int main()
{
    int vet[lunghezza_vettore], vet2[lunghezza_vettore];
    int i, out=0, puntatore=0;

    for(i = 0; i < lunghezza_vettore; i++)
    {
      vet2[i] = 0;
    }

    for (i = 0; i<lunghezza_vettore; i++)
    {
        vet[i] = (rand()%1000)+1;
        
    }
    stampa(vet);
    i=0;
    
    for(i=0; i<lunghezza_vettore; i++)
    {
        if(n_primo(vet[i])==1)
        {
            vet2[puntatore]=vet[i];
            out=1;
            puntatore++;
        }
    }

    if(out==0)
        printf("\n\nnon sono stati trovati numeri primi");
    else
    {
        printf("\n\nsono presenti numeri primi");
        stampa(vet2);
    }
    return 0;
}
