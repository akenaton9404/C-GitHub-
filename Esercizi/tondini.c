#include <stdio.h>

int main()
{
  int ni = 0, ns = 0, nsc = 0;
  float diam, x;

  for(int i = 0; i < 100; i++)
  {
    printf("Diametro pezzo (in mm): ");
    scanf("%f", &diam);

    if(diam > 30)
    {
      if(diam > 30.5)
      {
        printf("Tondino da scartare\n");
        nsc++;
      }
      else
      {
        printf("Tondino da scontare\n");
        ns++;
      }
    }
    else
    {
      printf("Tondino da vendere a prezzo pieno\n");
      ni++;
    }
  }

  printf("\nNumero di tondini da vendere a prezzo pieno: %d\n", ni);
  printf("Numero di tondini da scontare: %d\n", ns);
  printf("Percentuale di tondini da scartare: %d%%\n", nsc);

  return 0;
}
