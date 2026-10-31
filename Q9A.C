#include <stdio.h>

int main() {
    int n, i, temp;
    
    printf("Enter number of elements (maximum 5): ");
    scanf("%d", &n);
    
    if(n > 5 || n <= 0) {
        printf("Please enter a valid size between 1 and 5.\n");
        return 0;
    }

    int arr[5];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reversing the array in-place
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nReversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}