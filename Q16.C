#include <stdio.h>

int main() {
    float val, min_val, max_val;
    
    printf("Enter value 1: ");
    scanf("%f", &val);
    min_val = max_val = val;
    
    for (int i = 2; i <= 100; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &val);
        
        if (val < min_val) min_val = val;
        if (val > max_val) max_val = val;
    }
    
    printf("Largest value = %.2f\n", max_val);
    printf("Smallest value = %.2f\n", min_val);
    return 0;
}