#include <stdio.h>

int main() {
    int n, i, num;

    printf("Enter current number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Extra space allocated for the new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new number to insert at the beginning: ");
    scanf("%d", &num);

    // Shift all existing elements one position to the right
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number at the very beginning (index 0)
    arr[0] = num;
    n++; // Increment size

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}