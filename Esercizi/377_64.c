#include <stdio.h>
int main()
{
  int n, abitanti, abitanti_attivi;

  printf("Numero di comuni: ");
  scanf("%d", &n);

  for(int i=0; i<n; n++)
  {
    do
    {
      printf("Abitanti del comune %d: ", i+1);
      scanf("%d", &abitanti);
    }while(abitanti<0);

    do
    {
      printf("Abitanti attivi del comune %d: ", i+1);
      scanf("%d", &abitanti_attivi);
    }while(abitanti_attivi<0 || abitanti_attivi>abitanti);

    if((abitanti_attivi/abitanti*100)>rapporto_max)
    {
      rapporto_max=abitanti_attivi/abitanti*100;
    }
    if((abitanti_attivi/abitanti*100)<rapporto_min)
    {
      rapporto_min=abitanti_attivi/abitanti*100;
    }
  }

  printf("\nIl comune %d ha il rapporto abitanti_attivi/abitanti maggiore è: ", a);
  printf("\nIl comune %d ha il rapporto abitanti_attivi/abitanti minore è: ", b);
}
