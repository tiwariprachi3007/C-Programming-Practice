#include <stdio.h>
int main() {
    int i, j, r, c, rsum, csum, arr[10][10];

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Row sums
    for(i = 0; i < r; i++) {
        rsum = 0;
        for(j = 0; j < c; j++) {
            rsum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, rsum);
    }
    // Column sums
    for(i = 0; i < c; i++) {
        csum = 0;
        for(j = 0; j < r; j++) {
            csum += arr[j][i];
        }
        printf("Sum of column %d: %d\n", i+1, csum);
    }
    return 0;
}