#include <stdio.h>

void find(int arr[], int n, int *max, int *min)
{
    int i;

    *max = arr[0];
    *min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];

        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int arr[5], i, max, min;

    printf("Enter 5 elements: ");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    find(arr, 5, &max, &min);

    printf("Maximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}