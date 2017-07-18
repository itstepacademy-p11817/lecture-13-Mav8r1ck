#include <stdio.h>


int quantity_of_num(int l)
{
    int quantity = 0;
    int POW = 1;
    while (l != 0)
    {
        l /= 10;
        quantity++;
        POW *=10;
    }
    return quantity;
}

int sum_of_numbers(int l, int r)
{
    int POW = 1;
    int sum = 0;
    while (r!=0)
    {
        r/=POW;
        sum += (l/POW)%10;
        POW *=10;
    }
    return sum;
}

int main()
{
    int chislo = 0;
    printf("Enter number:\n");
    scanf("%d", &chislo);
    int const quant = quantity_of_num(chislo);
    int const sum = sum_of_numbers(chislo, chislo);
    printf("Quantity of numbers:%d\nSum of numbers:%d\nArithmetic mean:%d\n", quant, sum, sum/quant);
    return 0;
}