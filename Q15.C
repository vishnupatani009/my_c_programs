#include <stdio.h>

int main() {
    int n;
    float val, sum = 0;
    
    printf("Enter total number of values (n): ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive value for n.\n");
        return 0;
    }
    
    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("Value %d: ", i);
        scanf("%f", &val);
        sum += val;
    }
    
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", sum / n);
    return 0;
}