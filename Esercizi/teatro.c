/*
SVILUPPATO DA 

David Petru Cojocariu, Nidal Fatnassi, Riccardo Leon Piccolo, David Germano, Marco Tartaglione

*/
#include <stdio.h>

int main()
{
	int postiP, postiG, totale;

	printf("Numero di biglietti per la platea venduti: ");
	scanf("%d", &postiP);

	if (postiP > 150 || postiP < 0)
	{
		printf("Valore non valido\n");
		system("pause");
	}
	else
	{
		printf("Numero di biglietti per la galleria venduti: ");
		scanf("%d", &postiG);

		if (postiG > 100 || postiG < 0) 
		{
			printf("Valore non valido\n");
			system("pause");
		}
		else
		{
			totale = (postiP * 40) + (postiG * 30);
			postiP = 150 - postiP;
			postiG = 100 - postiG;

			printf("\nPosti rimanenti il platea: %d", postiP);
			printf("\nPosti rimanenti il galleria: %d\n", postiG);
			printf("\nIncassi totali del teatro %d\n", totale);

			system("pause");
		}
	}

	return 0;
}