#include <stdio.h>

int main() {
    float val, sum = 0;
    
    printf("Enter 10 numbers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("Value %d: ", i);
        scanf("%f", &val);
        sum += val;
    }
    
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", sum / 10.0);
    return 0;
}