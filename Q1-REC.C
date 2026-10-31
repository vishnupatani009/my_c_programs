#include <stdio.h>

int power(int a, int b)
{
    int i, result = 1;

    for(i = 1; i <= b; i++)
    {
        result = result * a;
    }

    return result;
}

int main()
{
    int a, b;

    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    printf("Power = %d", power(a, b));

    return 0;
}