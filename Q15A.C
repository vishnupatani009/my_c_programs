#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty!\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Shift all elements to the left by 1 position
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deleting first element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}