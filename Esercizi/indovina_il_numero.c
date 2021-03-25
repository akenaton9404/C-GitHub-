#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
  int menu, n_random, risposta, cont, p1, p2, p, multi;
  float scarto;
  char sn;

  do
  {
    system("cls");
    cont = 0;
    scarto = 0;

      printf("Vuoi giocare contro: \n");
      printf("\n1) COMPUTER\n");
      printf("2) MULTIPLAYER\n");

    do
    {
      printf("\nScelta: ");
      scanf("%d", &menu);
    } while(menu != 2 && menu != 1);

    if(menu == 1) //gioco contro computer
    {
      system("cls");
      printf("===== VS COMPUTER =====\n");

      srand(time(NULL));
      n_random = rand()%20001 - 10000;

      do
      {
        if(cont > 0)
        {
          if(n_random < risposta)
            printf("\nTroppo piccolo\n");
          else
            printf("\nTroppo grande\n");

          printf("Riprova: ");
        }
        else
        {
          printf("\n%d", n_random);
          printf("\nProva ad indovinare il numero: ");
        }
        scanf("%d", &risposta);

        scarto += pow(n_random - risposta, 2);
        cont++;

      } while(risposta != n_random);

      scarto = sqrt(scarto/(cont - 1));

      printf("\nHai indovinato!\n");
      printf("\nHai impiegato %d tentativi", cont);
      printf("\nIl tuo scarto quadratico medio: %.2lf\n", scarto); //cont - 1 perchè, per arrivare a questo punto, deve aver vinto

    }
    else
    {
      system("cls");
      printf("===== MULTIPLAYER =====\n");

        do
        {
          printf("\nChi deve indovinare (numero del player)? 1 / 2 ");
          scanf("%d", &multi);
        } while(multi != 1 && multi != 2);

        do
        {
          printf("\nGiocatore, scegli un numero tra -10000 e 10000: ");
          scanf("%d", &p1);
        } while(p1 > 10000 || p1 < -10000);

        system("cls");

        do
        {
          if(cont > 0)
          {
            if(p1 < p2)
              printf("\nTroppo piccolo\n");
            else
              printf("\nTroppo grande\n");

            printf("Riprova: ");
          }
          else
          {
              printf("Giocatore %d, prova ad indovinare: ", multi);
          }

          do
          {
            scanf("%d", &p2);
          } while(p2 > 10000 || p2 < -10000);

            scarto += pow(p1 - p2, 2);
            cont++;

        } while(p1 != p2);

        scarto = sqrt(scarto/(cont - 1));

        printf("\nBravo, hai indovinato!\n");
        printf("\nHai impiegato %d tentativo/i", cont);
        printf("\nLo scarto quadratico medio del giocatore %d: %.2lf\n", multi, scarto);
    }

    printf("\nVuoi continuare? s/n ");
    scanf("%s", &sn);

  } while(sn == 'S' || sn == 's');

}
