#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    int forwardDiagonalSum = 0, backwardDiagonalSum = 0;

    for (i = 0; i < n; i++) {
        forwardDiagonalSum += matrix[i][i];        // Forward diagonal: elements at (i, i)
        backwardDiagonalSum += matrix[i][n - i - 1]; // Backward diagonal: elements at (i, n-i-1)
    }

    printf("Forward diagonal sum: %d\n", forwardDiagonalSum);
    printf("Backward diagonal sum: %d\n", backwardDiagonalSum);

    if (forwardDiagonalSum == backwardDiagonalSum) {
        printf("The forward diagonal is equal to the backward diagonal.\n");
    } else {
        printf("The forward diagonal is not equal to the backward diagonal.\n");
    }

    return 0;
}


