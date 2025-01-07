#include <stdio.h>
int main() {
    int n, i, j, isEqual = 1;
    printf("Enter the dimension of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && matrix[i][j] != matrix[j][i]) { 
                isEqual = 0;
                break;
            }
        }
        if (!isEqual) break;
    }
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    if (isEqual) {
        printf("\nThe upper triangular matrix is the same as the lower triangular matrix.\n");
    } else {
        printf("\nThe upper triangular matrix is not the same as the lower triangular matrix.\n");
    }

    return 0;
}

