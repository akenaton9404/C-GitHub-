#include <stdio.h>
#define griglia 20

int controllo(int ordine[], int i, int temp)
{
	for(int j=0; j<i; j++)
	{
		if(ordine[j]==temp)
			return 1;
	}
}
void start(int ordine[], int macchine)
{
	int temp;
	
	for(int i=0; i<macchine; i++)
	{
		do{
			printf("Numero dell'auto, posizione %d: ", i+1);
			scanf("%d", &temp);
		}while(controllo(ordine, i, temp));
		
		ordine[i] = temp;
		
	
	}
}

int main()
{
	int ordine[griglia];
	int i, macchine;
	
	do{
		printf("Quante macchine ci sono in griglia? ");
		scanf("%d", &macchine);
	}while(macchine<3 || macchine>20);
	
	start(ordine, macchine);
	sorpasso(ordine);
	
	return 0;
}
