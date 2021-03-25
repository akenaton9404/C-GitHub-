#include <stdio.h>

void temp_p_d()
{
  int temp, dp, giorno, cont = 0; //dp = dispari-pari (0 = pari; 1 = dispari)

  for(int i = 0; i < 32; i++)
  {
    if(i == 0)
      giorno = 31;
    else
      giorno = i;

    printf("Temperatura media del giorno %d: ", giorno);
    scanf("%d", &temp);

    if(i > 0 && (dp == 1 && temp % 2 == 0))
      cont++;

    if(temp % 2 == 0)
      dp = 0;
    else
      dp = 1;
  }

  printf("\nIl mese ha avuto un giorno con temperatura media dispari e il giorno seguente con temperatura media pari %d volta/e", cont);
}

int main()
{
  temp_p_d();

  return 0;
}
