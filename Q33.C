#include <stdio.h>

int main() {
    long long num, square;
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    square = num * num;
    
    long long temp = num;
    long long divisor = 1;
    while (temp > 0) {
        divisor *= 10;
        temp /= 10;
    }
    
    if (square % divisor == num)
        printf("%lld is an automorphic number.\n", num);
    else
        printf("%lld is not an automorphic number.\n", num);
        
    return 0;
}