#include <stdio.h>

int main() {
    int count = 0;
    for (int num = 2; num <= 500; num++) {
        int isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }
    printf("Total prime numbers between 1 and 500: %d\n", count);
    return 0;
}