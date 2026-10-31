#include <stdio.h>

int main() {
    int arr[10], result[10] = {0};
    int i, n, choice;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to shift (n): ");
    scanf("%d", &n);

    printf("Enter direction (1 for Left shift, 2 for Right shift): ");
    scanf("%d", &choice);

    if (n >= 10) {
        // If shift is greater than or equal to size, all positions remain 0
        for(i = 0; i < 10; i++) result[i] = 0;
    } else if (choice == 1) {
        // Left shift
        for(i = 0; i < 10 - n; i++) {
            result[i] = arr[i + n];
        }
    } else if (choice == 2) {
        // Right shift
        for(i = n; i < 10; i++) {
            result[i] = arr[i - n];
        }
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("\nArray after shifting:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}