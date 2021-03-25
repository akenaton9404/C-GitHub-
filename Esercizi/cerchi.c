#include <stdio.h>

int main()
{
    int a=1;
    float b, c;
    char d;
    do
    {
        b=0;
        c=0;
        b=a*2*3.14;
        c=a*a*3.14;
        printf("\nCirconferenza: %f  Area: %f\n", b, c);
        while(d!=83 && d!=115 && d!=78 && d!=110)
        {
            printf("Continuare? s/n ");
            scanf("%s", &d);
        }
        d=0;
        a++;
    }
    while(a<=20 || (d!=78 || d!=110));

    return 0;
}
