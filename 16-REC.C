#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b, ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Addition = %d", add(a,b));
            break;

        case 2:
            printf("Subtraction = %d", sub(a,b));
            break;

        case 3:
            printf("Multiplication = %d", mul(a,b));
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f", divi(a,b));
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}