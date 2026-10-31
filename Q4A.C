#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n = 9;
    int i, count;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Minimum notes required:\n");
    for(i = 0; i < n; i++) {
        if(amount >= notes[i]) {
            count = amount / notes[i];
            amount = amount % notes[i];
            printf("%d note(s) of %d Rs.\n", count, notes[i]);
        }
    }

    return 0;
}