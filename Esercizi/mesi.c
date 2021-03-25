#include <stdio.h>

int main()
{
    int giorno, mese, anno, giorno1, mese1, anno1;

    /*Chiede il giorno in input*/
    printf("Giorno: ");
    scanf("%d", &giorno);

    if(giorno>31 || giorno<1)
    {/*Controlla che i giorni facciano parte del range 1-31*/
        printf("Numero giorno non valido");
    }
    else
    {
        /*Chiede il mese in input*/
        printf("Mese: ");
        scanf("%d", &mese);

        if(mese>12 || mese<1)
        {
        /*Controlla che i mesi facciano parte del range 1-12*/
            printf("Numero mese non valido");
        }
        else
        {
            if((giorno<=30 && (mese==4 || mese==6 || mese==9 || mese==11)) || (giorno<=29 && mese==2) || (mese==1 || mese==3 || mese==5 || mese==7 ||  mese==8 ||  mese==10 ||  mese==12))
            /*Effettua 3 controlli, collegati da OR:
            1)Se il giorno non è maggiore di 30 e i mesi sono: Aprile, Giugno, Settembre e Novembre;
            2)Se il giorno non è maggiore di 29 e il mese è Febbraio;
            3)Se il mese è Gennaio, Marzo, Maggio, Luglio, Agosto, Ottobre e Dicembre.
            Se almeno 1 di queste fosse vera si chiede in input l'anno, altrimenti c'è un errore logico
            */
            {
                printf("Inserire l'anno: ");
                scanf("%d", &anno);

                if((anno%100==0 && (anno%400==0)) || (!(anno%100==0) && anno%4==0))
                {/*Controlla che l'anno sia o no bisestile*/
                	   /*------------------------------------------*/

                     /*Chiede il giorno in input*/
                     printf("Giorno: ");
                     scanf("%d", &giorno1);

                     if(giorno1>31 || giorno1<1)
                     {/*Controlla che i giorni facciano parte del range 1-31*/
                         printf("Numero giorno non valido");
                     }
                     else
                     {
                         /*Chiede il mese in input*/
                         printf("Mese: ");
                         scanf("%d", &mese1);

                         if(mese1>12 || mese1<1)
                         {
                         /*Controlla che i mesi facciano parte del range 1-12*/
                             printf("Numero mese non valido");
                         }
                         else
                         {
                             if((giorno1<=30 && (mese1==4 || mese1==6 || mese1==9 || mese1==11)) || (giorno1<=29 && mese1==2) || (mese1==1 || mese1==3 || mese1==5 || mese1==7 ||  mese1==8 ||  mese1==10 ||  mese1==12))
                             /*Effettua 3 controlli, collegati da OR:
                             1)Se il giorno non è maggiore di 30 e i mesi sono: Aprile, Giugno, Settembre e Novembre;
                             2)Se il giorno non è maggiore di 29 e il mese è Febbraio;
                             3)Se il mese è Gennaio, Marzo, Maggio, Luglio, Agosto, Ottobre e Dicembre.
                             Se almeno 1 di queste fosse vera si chiede in input l'anno, altrimenti c'è un errore logico
                             */
                             {
                                 printf("Inserire l'anno: ");
                                 scanf("%d", &anno1);

                                 if((anno1%100==0 && (anno1%400==0)) || (!(anno1%100==0) && anno1%4==0))
                                 {/*Controlla che l'anno sia o no bisestile*/
                                      printf("ok"); 
                                 }
                                 else
                                 {
                                     if(giorno1==29 && mese1==2)
                                     {
                                     /*Controlla se, in caso di anno bisestile, febbraio non abbia 29 giorni*/
                                       printf("\nAnno non bisestile, febbraio ha 28 giorni");
                                     }
                                     else
                                     {
                                     /*Nel caso i dati inseriti non riguardino Febbraio*/
                                       printf("\nE` stata inserita la data: %d / %d / %d, l'anno non e' bisestile", giorno1, mese1, anno1);
                                     }
                                 }
                             }
                             else
                             {
                                 printf("\nGiorno non valido rispetto al mese");
                             }
                         }
                     }
                     return 0;
                }
                    /*------------------------------------------*/
                else
                {
                    if(giorno==29 && mese==2)
                    {
                    /*Controlla se, in caso di anno bisestile, febbraio non abbia 29 giorni*/
                      printf("\nAnno non bisestile, febbraio ha 28 giorni");
                    }
                    else
                    {
                    /*Nel caso i dati inseriti non riguardino Febbraio*/
                      printf("\nE` stata inserita la data: %d / %d / %d, l'anno non e' bisestile", giorno, mese, anno);
                    }
                }
            }
            else
            {
                printf("\nGiorno non valido rispetto al mese");
            }
        }
    }
    return 0;
}
