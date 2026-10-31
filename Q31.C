#include <stdio.h>

int main() {
    long long totalSum = 0;
    for (int num = 2; num <= 500; num++) {
        int isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            totalSum += num;
        }
    }
    printf("Sum of prime numbers between 1 and 500: %lld\n", totalSum);
    return 0;
}