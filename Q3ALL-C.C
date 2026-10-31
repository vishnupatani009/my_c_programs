#include <stdio.h>

int main()
{
    int a[3][3];
    int *p;
    int i, max, min;

    printf("Enter 9 elements:\n");

    for(i=0; i<9; i++)
        scanf("%d", &a[0][i]);

    p = &a[0][0];

    max = *p;
    min = *p;

    for(i=0; i<9; i++)
    {
        if(*(p+i) > max)
            max = *(p+i);

        if(*(p+i) < min)
            min = *(p+i);
    }

    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);

    return 0;
}