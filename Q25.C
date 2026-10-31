#include <stdio.h>

int main() {
    int num, original, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    
    if (original == rev)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");
        
    return 0;
}