#include <stdio.h>

int main()
{
    int n_giorno, copie, cont=0, tot=0, copie_max, n_giorno_max, vend_dom=0, dom=0, num_g, giorno_max;
    char giorno[9];

    printf("\nQuantità di giorni con dati: ");
    scanf("%d", &num_g);

    while(cont<num_g)
    {

      printf("\nNumero del giorno: ");
      scanf("%d", &n_giorno);
      printf("Giorno della settimana: ");
      scanf("%s", giorno);
      printf("Copie vendute: ");
      scanf("%d", &copie);

      if(copie>copie_max)
      {
        copie_max = copie;
        n_giorno_max = n_giorno;
        giorno_max = giorno;
      }

      /*Inizializza una var di tipo char e le associa il primo valore contenuto nel vettore "giorno", ovvero la prima lettere del giorno inserito*/
      char lettera = giorno[0];

      /*d=68 D=100*/
      if(lettera==68 || lettera==100)
      {
        vend_dom+=copie;
        dom++;
      }

      tot+=copie;
      cont++;
    }

    tot/=cont;
    printf("\nMedia giornaliera di vendite: %d\n", tot);

    printf("Il giorno con più vendite in assoluto è stato: %s %d, con %d copie\n", giorno_max, n_giorno_max, copie_max);

    vend_dom/=dom;

    printf("La medie delle vendite domenicali: %d\n", vend_dom);
}
