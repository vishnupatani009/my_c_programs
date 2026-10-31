#include <stdio.h>

int main() {
    int arr[100], n, num, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at the last position: ");
    scanf("%d", &num);

    // Insert at the end
    arr[n] = num;
    n++;

    printf("Array after insertion at end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}