#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += (2 * i);
    }
    
    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}