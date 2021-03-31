#include<stdio.h>

//funzione per trovare numeri: perfetti, abbondanti e difettivi
int numero_pad(int a)
{
    int somma = 0;

    //ciclo per trovare i divisori
    for (int i=a-1; i>=1; i--)
       {
          if(a%i==0)
            somma += i;
       }

    if(somma == a) //perfetto
      return 0;
    if(somma > a) //abbondante
      return 1;
    if(somma < a) //difettivo
      return -1;
}

int main()
{
    int i, cont = 0, n, somma = 0, perfetti[20], disp = 0;

    printf("***** Calcolo dei divisori di un numero *****\n\n");
    printf("Inserire il numero di cui calcolare i divisori: ");
    scanf("%d", &n);

    for(i = 0; i < 20; i++) //imposta tutto l'array a 0 per comodità
    {
      perfetti[i] = 0;
    }

    for(i = 1; i <= n; i++) //controlla tutti i numeri inferiori ad n
    {
        if(numero_pad(i) == 0) //posiziona i numeri perfetti nell'array
        {
          perfetti[cont] = i;
          cont++;
        }
        if(numero_pad(i) == 1) //stampa dei numero abbondanti fino al primo dispari
        {
          if(i % 2 == 1)
          {
            if(disp == 0)
              printf("\n\nPrimo numero abbondante dispari: %d", i);
            disp = 1;
          }
          if(disp == 0)
            printf("\nNumero abbondante: %d", i);
        }
    }

    if(perfetti[0] == 0)
      printf("\nNon è stato trovato nessun numero perfetto\n");
    else
    {
      for(i = 0; i < cont; i++) //somma tutti i numeri perfetti
      {
        somma += perfetti[i];
      }
      for(i = 0; i < cont; i++) //controlla e stampa i numeri perfetti maggiori della media
      {
        if(perfetti[i] > somma/cont)
          printf("\nNumero perfetto maggiore della media: %d\n", perfetti[i]);
      }
    }

    return 0;
}
