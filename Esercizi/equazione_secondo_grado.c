#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//  -4 + rad( 16 - 8 ) / 4

void formula(int *a, int *b, int *c, int *delta)
{
  printf("\nRisultato 1: %.2f", (-(*b) + sqrt(*delta)) / 2 * *a);
  printf("\nRisultato 2: %.2f", (-(*b) - sqrt(*delta)) / 2 * *a);
}

int delta_f(int* a, int* b, int* c)
{
  int d;

  d = pow(*b, 2) - 4 * *a * *c;

  return d;
}

int main()
{
    int a, b, c; //coefficienti
    char sn;

    do
    {

      printf("===== CALCOLO EQUAZIONI DI SECONDO GRADO =====\n");
      printf("\nInserire il coefficiente di a: ");
      scanf("%d", &a);
      printf("Inserire il coefficiente di b: ");
      scanf("%d", &b);
      printf("Inserire c: ");
      scanf("%d", &c);

      int delta = delta_f(&a, &b, &c);

      if(delta < 0)
      {
        printf("\nL'equazione non ha risultato reale");
      }
      else
      {
        formula(&a, &b, &c, &delta);
      }

      printf("\nVuoi continuare? s/n ");
      scanf("%s", &sn);
      system("cls");
    } while (sn == 's' || sn == 'S');
    return 0;
}
