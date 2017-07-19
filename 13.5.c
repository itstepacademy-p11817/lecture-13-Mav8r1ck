#include <stdio.h>


int quantity_of_num(int l)
{
    int quantity = 0;
    while (l != 0)
    {
        l /= 10;
        quantity++;

    }
    return quantity;
}

int sum_of_numbers(int l)
{
    int sum = 0;
    while (l != 0)
    {
        sum += l%10;
        l /= 10;
    }
    return sum;
}

int main()
{
    int chislo = 0;
    printf("Enter number:\n");
    scanf("%d", &chislo);
    int const quant = quantity_of_num(chislo);
    int const sum = sum_of_numbers(chislo);
    printf("Quantity of numbers:%d\nSum of numbers:%d\nArithmetic mean:%d\n", quant, sum, sum/quant);
    return 0;
}