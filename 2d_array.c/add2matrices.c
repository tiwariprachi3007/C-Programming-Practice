#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols];
    int B[rows][cols];
    int sum[rows][cols];

    // Input matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("\nResultant Matrix (A + B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}




