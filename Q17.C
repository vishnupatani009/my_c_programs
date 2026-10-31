#include <stdio.h>

int main() {
    int pos = 0, neg = 0, zero = 0;
    float val;
    
    printf("Enter 200 numbers:\n");
    for (int i = 1; i <= 200; i++) {
        printf("Value %d: ", i);
        scanf("%f", &val);
        
        if (val > 0) pos++;
        else if (val < 0) neg++;
        else zero++;
    }
    
    printf("\nPositive numbers count = %d\n", pos);
    printf("Negative numbers count = %d\n", neg);
    printf("Zeroes count = %d\n", zero);
    return 0;
}