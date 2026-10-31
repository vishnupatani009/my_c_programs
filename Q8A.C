#include <stdio.h>

int main() {
    int src[5];
    int dest[10] = {0}; // Initialize destination array with 0
    int i, j = 0;

    printf("Enter 5 elements for source array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &src[i]);
    }

    // Copying elements into alternate positions of the destination array (skipping one index each time)
    for(i = 0; i < 5; i++) {
        dest[j] = src[i];
        j += 2; 
    }

    printf("\nDestination array of 10 elements (with skipped elements as 0):\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}