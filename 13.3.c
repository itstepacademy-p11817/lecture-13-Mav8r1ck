
#include <stdio.h>

int main()

{
    int chislo = 0;
    printf("Enter number:\n");
    scanf("%d", &chislo);

    int POW = 1;

    int a = chislo;
    while (a != 0)
    {
        a /= 10;
        POW *=10;
    }

    //printf("%d", POW);
    int b = 0;
    while (POW!=0)
    {

        b = (chislo / POW) % 10;

        b == 3 || b == 6 ? printf("0") : printf("%d", b);
        POW /= 10;
    }

    return 0;
}