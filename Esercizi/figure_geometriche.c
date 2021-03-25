#include <stdio.h>

int main()
{
    int base, altezza, scelta, i, a;
    char r;

    do
    {
      printf("*****************\n* 1) Quadrato   *\n* 2) Rettangolo *\n* 3) Triangolo  *\n*****************\n");

      printf("\nFigura da rappresentare (numero equivalente): ");
      scanf("%d", &scelta);
      switch (scelta)
      {
        case 1:
          printf("\nValore del lato: ");
          scanf("%d", &base);
          printf("\n");

          for(i=0; i<base; i++)
          {
            for(a=0; a<base; a++)
            {
              if(i==0 || i==base-1)
              {
                printf("*");
              }
              else
              {
                if(a==0 || a==base-1)
                  printf("*");
                else
                  printf(" ");
              }
            }
            printf("\n");
          }
          break;

        case 2:
          printf("\nValore della base: ");
          scanf("%d", &base);
          printf("Valore dell'altezza: ");
          scanf("%d", &altezza);
          printf("\n");

          for(i=0; i<altezza; i++)
          {
              for (a=0; a<base ;a++)
              {
                  if (i==0 || i==altezza-1)
                  {
                      printf("*");
                  }
                  else
                  {
                    if (a==0 || a==base-1)
                        printf("*");
                    else
                        printf(" ");
                  }
              }
              printf("\n");
            }
            break;

        case 3:
          printf("\nValore dei cateti: ");
          scanf("%d", &altezza);

          for(i=0; i<=altezza; i++)
          {
              for(a=0; a<i && a<altezza; a++)
              {
                if(i<=2 || i==altezza)
                  printf("*");
                else
                {
                  if(a==0 || a==i-1)
                    printf("*");
                  else
                  {
                    printf(" ");
                  }
                }
              }
              printf("\n");
            }
          break;

        default:
          printf("\nInserire un numero tra 1 e 3");
          break;

      }

        printf("\nDesideri continuare: s/n ");
        scanf("%s", &r);
        printf("\n");

      }while(r==83 || r==115);
    return 0;
}
