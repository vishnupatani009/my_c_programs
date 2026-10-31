#include <stdio.h>

int main()
{
    int a[4][4], b[16];
    int i, j, k, temp;

    printf("Enter 16 elements:\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d", &a[i][j]);
            b[i*4+j] = a[i][j];
        }
    }

    for(i=0; i<16; i++)
    {
        for(j=i+1; j<16; j++)
        {
            if(b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");

    for(k=0; k<16; k++)
        printf("%d ", b[k]);

    return 0;
}