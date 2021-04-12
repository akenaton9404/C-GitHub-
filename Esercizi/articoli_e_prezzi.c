#include <stdio.h>
#include <stdlib.h>

#define lunghezzavet 10

void maxmin(float a[], float* min, float* max)
{

  *max = a[0];
  *min = a[0];

  for(int i = 0; i < lunghezzavet; i++)
  {
    if(a[i] > *max)
      *max = a[i];
    if(a[i] < *min)
      *min = a[i];
  }
}

float media(float a[], float b[])
{
  float media = 0;

  for(int i = 0; i < lunghezzavet; i++)
  {
    media += a[i];
  }

  media /= lunghezzavet;

  for(int i = 0; i < lunghezzavet; i++)
  {
    if(a[i] > media)
      b[i] = a[i];
  }

  return media;
}

void ricerca(float a[])
{
  float n;

  printf("\n\nRicerca codice da prezzo: ");
  scanf("%f", &n);

  for(int i = 0; i < lunghezzavet; i++)
  {
    if(n == a[i])
      printf("Codice articolo: %d", i+1);
    else if(i == lunghezzavet - 1 && n != a[i])
      printf("Nessun articolo ha quel prezzo");
  }
}

int main()
{
  float vet[lunghezzavet], Sopramedia[lunghezzavet];
  float min, max;

  for(int i = 0; i < lunghezzavet; i++)
  {
    printf("Prezzo articolo %d: ", i+1);
    scanf("%f", &vet[i]);
  }

  maxmin(vet, &min, &max);
  printf("Media: %.2f", media(vet, Sopramedia));

  ricerca(vet);

  return 0;
}
