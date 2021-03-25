#include <stdio.h>

int main()
{
	float n1, n2;

	printf("Primo numeri: ");
	scanf("%f", &n1);
	printf("Secondo numero: ");
	scanf("%f", &n2);

	if (n1 > n2)
	{
		printf("Il numero %.2lf", n1);
		printf("è maggiore di %.2lf\n", n2);
		system("pause");
	}
	else
	{
		printf("Il numero %.2lf", n2);
		printf(" è maggiore di %.2lf\n", n1);
		system("pause");
	}
	return 0;
}