#include <stdio.h>

int main() {
    int boys = 0, girls = 0;
    char code;
    
    printf("Enter gender code for 50 students ('B' or 'b' for Boy, 'G' or 'g' for Girl):\n");
    for (int i = 1; i <= 50; i++) {
        printf("Student %d code: ", i);
        scanf(" %c", &code);
        
        if (code == 'B' || code == 'b') {
            boys++;
        } else if (code == 'G' || code == 'g') {
            girls++;
        } else {
            printf("Invalid code! Please re-enter for student %d.\n", i);
            i--; // Repeat iteration for invalid input
        }
    }
    
    printf("\nTotal Boys = %d\n", boys);
    printf("Total Girls = %d\n", girls);
    return 0;
}