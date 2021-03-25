#include <stdio.h>
#include <math.h>

int main()
{
	int scelta, bin, a, tot=0, dec;
	char hex, sn;

	do
	{
		system("cls");

		printf("******************************\n");
		printf("* 1) Binario -> Decimale     *\n");
		printf("* 2) Decimale -> Binario     *\n");
		printf("* 3) Esadecimale -> Decimale *\n");
		printf("******************************\n");

		do
		{
			printf("Conversione da eseguire: ");
			scanf("%d", &scelta);
		}while(scelta<0 || scelta>3);

		switch(scelta)
		{
			case 2: /*decimale -> binario*/

				do
				{
					printf("\nNumero decimale (compreso tra 0 a 255): ");
					scanf("%d", &dec);
				}while(dec<0 || dec>255);

				bin = dec%2 + (dec/2)%2*10 + (dec/4)%2*100 + (dec/8)%2*1000 + (dec/16)%2*10000 + (dec/32)%2*100000 + (dec/64)%2*1000000 + (dec/128)%2*10000000;

				printf("Numero in binario: %d\n", bin);

				break;

			case 1: /*binario -> decimale*/
				do
				{
					printf("\nNumero binario (massimo 8 bit): ");
					scanf("%d", &bin);
				}while(bin<0 || bin>11111111);

				dec = bin/10000000*128 + bin/1000000%10*64 + bin/100000%100%10*32 + bin/10000%1000%100%10*16 + bin/1000%10000%1000%100%10*8 + bin/100%100000%10000%1000%100%10*4 + bin/10%1000000%100000%10000%1000%100%10*2 + bin%10000000%1000000%100000%10000%1000%100%10;

				printf("Numero in decimale: %d\n", dec);

				break;

			case 3:

				for(a=0; a<3; a++)
				{
					printf("\nCifra %d del numero esadecimale: ", a+1);
					scanf("%s", &hex);

					switch(hex)
					{
						case 48:
							break;
						case 49:
							tot+=1*pow(16, 2-a);
							break;
						case 50:
							tot+=2*pow(16, 2-a);
							break;
						case 51:
							tot+=3*pow(16, 2-a);
							break;
						case 52:
							tot+=4*pow(16, 2-a);
							break;
						case 53:
							tot+=5*pow(16, 2-a);
							break;
						case 54:
							tot+=6*pow(16, 2-a);
							break;
						case 55:
							tot+=7*pow(16, 2-a);
							break;
						case 56:
							tot+=8*pow(16, 2-a);
							break;
						case 57:
							tot+=9*pow(16, 2-a);
							break;
						case 97:
							tot+=10*pow(16, 2-a);
							break;
						case 98:
							tot+=11*pow(16, 2-a);
							break;
						case 99:
							tot+=12*pow(16, 2-a);
							break;
						case 100:
							tot+=13*pow(16, 2-a);
							break;
						case 101:
							tot+=14*pow(16, 2-a);
							break;
						case 102:
							tot+=15*pow(16, 2-a);
							break;
					}
				}
				printf("Numero in decimale: %d\n", tot);

				break;

			default:
				printf("Numero non presente nel menu");
		}
		printf("\nVuoi continuare? s/n ");
		scanf("%s", &sn);
		printf("\n");
	}
	while(sn==83 || sn==115); //con (scelta=="s" || scelta=="S") -> error: comparison between pointer and integer
	return 0;
}
