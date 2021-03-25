#include <stdio.h>

int fattoriale(int a)
{
  int f;

  if(a == 0)
    f = 1;
  else
    f = a * fattoriale(a-1);

    return f;
}

int main()
{
  int num, ris;

  do
  {
    scanf("%d", &num);
  } while(num < 0 || num > 16);

  ris = fattoriale(num);

  printf("%d\n", ris);
}
