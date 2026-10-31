#include <stdio.h>

int main() {
    int arr[100], n, pos, num, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert and the position (0 to %d): ", n);
    scanf("%d %d", &num, &pos);

    // Shift elements to the right
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new number
    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}