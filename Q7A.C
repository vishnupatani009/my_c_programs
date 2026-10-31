#include <stdio.h>

int main() {
    int mat[4][4], transpose[4][4];
    int i, j;

    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculating transpose by swapping rows and columns
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    printf("\nTranspose of the 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}