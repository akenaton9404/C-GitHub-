#include<stdio.h>

int numero_pad(int a)       //pad = perfetto, abbondante, difettivo
{
    int somma = 0;

    for (int i=a-1; i>=1; i--)
       {
          if(a%i==0)
            somma += i;
       }

    if(somma == a)
      return 0;
    if(somma > a)
      return 1;
    if(somma < a)
      return -1;
}

int main()
{
    int i, cont = 0, n, somma = 0, perfetti[20];

    printf("***** Calcolo dei divisori di un numero *****\n\n");
    printf("Inserire il numero di cui calcolare i divisori: ");
    scanf("%d", &n);

    for(i = 0; i < 20; i++)
    {
      perfetti[i] = 0;
    }

    for(i = 1; i <= n; i++)
    {
        if(numero_pad(i) == 0)
        {
          perfetti[cont] = i;
          cont++;
        }
    }

    if(perfetti[0] == 0)
      printf("\nNon è stato trovato nessun numero perfetto");
    else
    {
      for(i = 0; i < cont; i++)
      {
        somma += perfetti[i];
      }
      for(i = 0; i < cont; i++)
      {
        if(perfetti[i] > somma/cont)
          printf("\n%d", perfetti[i]);
      }
    }

    return 0;
}
