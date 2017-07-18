#include <stdio.h>


int only_2_same_numbers()
{
    int quantity = 0;
    int start = 1000;
    int stop = 9999;
    for (start; start <= stop; start++)
    {
        int a = start%10;
        int b = (start/10)%10;
        int c = (start/100)%10;
        int d = (start/1000)%10;
        if (a == b && a !=c && a != d || a == c && a != b && a != d || a == d && a != b && a != c)
        {
            quantity++;
        }
        else if (b == c && b != a && b != d || b == d && b != a && b != c)
        {
            quantity++;
        }
        else if (c == d && c != a & c != b)
        {
            quantity++;
        }
        else
        {
            continue;
        }
    }
    return quantity;
}

int main()
{

    printf("%d", only_2_same_numbers());
    return 0;
}