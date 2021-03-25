#include <stdio.h>
int main()
{
  int maglia;
  float tempo, tot_tempo;

  for(int i=0; i<20; i++)
  {
    printf("\nNumero di maglia del giocatore: ");
    scanf("%d", &maglia);
    for(int a=1; a<=10; a++)
    {
      printf("Tempo registrato nella gara %d (secondi): ", a);
      scanf("%f", &tempo);

      tot_tempo+=tempo;
    }

    printf("\nMaglia numero: %d\nMedia tempi registrati: %.2lf s\n", maglia, tot_tempo/10);

  }
}
