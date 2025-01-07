#include <stdio.h>
#include <math.h>
#define MAX 10 
int determinant(int matrix[MAX][MAX], int n) {
    int det = 0;
    int submatrix[MAX][MAX]; 
    int sign = 1; 
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
    }
    int x,i,j;
    for ( x = 0; x < n; x++) {
        int subi = 0;
        for (i = 1; i < n; i++) {
            int subj = 0;
            for (j = 0; j < n; j++) {
                if (j != x) {
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
            }
            subi++;
        }
        det += sign * matrix[0][x] * determinant(submatrix, n - 1);
        sign = -sign; 
    }

    return det;
}

int main() {
    int n,i,j, matrix[MAX][MAX];
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    int det = determinant(matrix, n);
    printf("\nThe determinant of the matrix is: %d\n", det);

    return 0;
}

