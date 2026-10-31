#include <stdio.h>

int main() {
    int n;
    long long a = 1, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}