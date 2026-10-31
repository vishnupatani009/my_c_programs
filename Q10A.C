#include <stdio.h>

int main() {
    int arr[10], visited[10];
    int i, j, count;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited tracking array
    }

    printf("\nFrequency of each number:\n");
    for(i = 0; i < 10; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;
        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("Element %d occurs %d time(s)\n", arr[i], count);
    }

    return 0;
}