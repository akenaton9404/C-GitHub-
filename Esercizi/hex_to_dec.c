#include <stdio.h>
#include <math.h>

int main()
{
    char hex;
    int dec, tot=0;

    for(int i=0; i<3; i++)
    {
        printf("\nCifra numero %d del numero in esadecimale (cifre in minuscolo): ", i+1);
        scanf("%s", &hex);
        switch(hex)
        {
            case 48:
                hex=0;
                break;
            case 49:
                hex=1;
                break;
            case 50:
                hex=2;
                break;
            case 51:
                hex=3;
                break;
            case 52:
                hex=4;
                break;
            case 53:
                hex=5;
                break;
            case 54:
                hex=6;
                break;
            case 55:
                hex=7;
                break;
            case 56:
                hex=8;
                break;
            case 57:
                hex=9;
                break;
            case 97:
                hex=10;
                break;
            case 98:
                hex=11;
                break;
            case 99:
                hex=12;
                break;
            case 100:
                hex=13;
                break;
            case 101:
                hex=14;
                break;
            case 102:
                hex=15;
                break;
            default:
                printf("Cifra non facente parte dell'alfabeto esadecimale\n");
                break;
        }

        tot+=(hex*pow(16,(2-i)));

        printf("\n%d", tot);
    }

    printf("\n%d", tot);
    return 0;
}
