#include <stdio.h>

int main()
{
  int l1, l2, l3;

  do {
    printf("Valore del primo cateto: ");
    scanf("%d", &l1);
  } while(l1<=0);
  do {
    printf("Valore del secondo cateto: ");
    scanf("%d", &l2);
  } while(l2<=0);
  do {
    printf("Valore del terzo cateto: ");
    scanf("%d", &l3);
  } while(l3<=0);

  if(l1==l2 && l2==l3)
  {
    printf("\nTriangolo equilatero");
  }
  else
  {
    if(l1==l2 || l2==l3 || l1==l3)
    {
      printf("\nTriangolo isoscele");
    }
    else
    {
      printf("\nTriangolo scaleno");
    }
  }
}
