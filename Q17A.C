#include <stdio.h>

void deleteElement(int arr[], int *size, int position) {
    // Check if the position is valid
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the left
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    (*size)--;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int position = 2; // Index of the element to delete (e.g., value 30)

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, &size, position);

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}