#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Digits: ");
    int temp = num;
    while (temp > 0) {
        printf("%d ", temp % 10);
        temp /= 10;
    }
    printf("\n");
    return 0;
}