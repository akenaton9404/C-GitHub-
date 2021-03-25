#include <stdio.h>

int fattoriale(int a)
{
  unsigned long long int f;

  if(a == 0)
    f = 1;
  else
    f = a * fattoriale(a-1);

    return f;
}

int main()
{
  unsigned long long int n, k, ris;

  do
  {
    printf("Inserire in valore di N: ");
    scanf("%d", &n);
  } while(n < 0);

  do
  {
    printf("Inserire in valore di K: ");
    scanf("%d", &k);
  } while(k < 0);

  ris = fattoriale(n - k);

  n = fattoriale(n);
  k = fattoriale(k);

  ris = fattoriale(n)/fattoriale(k) * ris;

  printf("\nNumero di combinazioni: %d", ris);
}
