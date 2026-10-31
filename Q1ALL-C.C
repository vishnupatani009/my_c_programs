#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], add[2][2];
    int sub[2][2], mul[2][2];
    int i, j, k;

    printf("Enter elements of first matrix:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &b[i][j]);

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];

            mul[i][j] = 0;
            for(k=0; k<2; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("\nAddition:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", add[i][j]);
        printf("\n");
    }

    printf("\nSubtraction:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }

    printf("\nMultiplication:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    return 0;
}