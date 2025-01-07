#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], rowSum[rows], colSum[cols];
    for (i = 0; i < rows; i++) rowSum[i] = 0;
    for (j = 0; j < cols; j++) colSum[j] = 0;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    printf("\nSum of each column:\n");
    for (j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
    return 0;
}

