#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function: a = %d b = %d", a, b);
}

int main()
{
    int x = 10, y = 20;

    printf("Before swapping: x = %d y = %d\n", x, y);

    swap(x, y);

    printf("\nAfter function call: x = %d y = %d", x, y);

    return 0;
}