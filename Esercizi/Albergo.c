#include <stdio.h>
#include <stdlib.h>
#define ncamere 11
#define caratteri 30

char camere[ncamere][caratteri];

void stampa()
{
    int i=0, b=0;
    
    printf("\nStanze Occupate: ");
    for(i=0; i<10; i++)
    {
        if (*camere[i] != 48)
        {
            b=1;
            printf("\nstanza %d\t%s", i+1, camere[i]);
        }
            
    }
    if (b==0)
        printf("\nNon ci sono camere occupate");
        
    b=0;    
    
    printf("\n\nStanze Libere: ");
    for(i=0; i<10; i++)
    {
        if (*camere[i] == 48)
        {
            b=1;
            printf("\nstanza %d", i+1);
        }
            
    }
    if (b==0)
        printf("\nNon ci sono camere libere");
}

void ricerca()
{
    char nome[ncamere][caratteri];
    int i=0, c=0, w=0, tf=1;
    
    printf("\nInserire il nome del cliente per la ricerca: ");
    scanf("%s", nome[c]);
    
    while(w<10)
    {
        if(*camere[i]!=*nome[c])
            i++;
        else
            tf=0;
            
        w++;
    }
    if(tf==0)
        printf("\nstanza: %d", i+1);
    else
        printf("\nNon è stato trovato alcun cliente");
}
void assegna()
{
    int i=1;
    char sn;
    
    
    while(camere[i]==0)
        i++;   
    
    printf("Inserire il nome del cliente: ");
    scanf("%s", camere[i]);
    
    stampa();
}

int main()
{
    int i=0;
    char sn;
    
    printf("Se la stanza è vuota, inserire 0\n");
    while(i<10)
    {
        printf("Inserire il nome del cliente della stanza %d: ", i+1);
        scanf("%s", camere[i]);
        i++;
    }
    stampa();
    
    printf("\nSi desidera fare la ricerca? (s/n): ");
    scanf("%s", &sn);
    if(sn==83 || sn==115)
        ricerca();
    
    printf("\nSi desidera assegnare una camera? (s/n): ");
    scanf("%s", &sn);
    if(sn==83 || sn==115)
        assegna();
    return 0;
}