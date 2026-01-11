#include <stdio.h>
int main() {
    int arr[5][5];

    // Input
    printf("Enter 25 integers for a 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Output
    printf("\nMatrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);  // space added
        }
        printf("\n");
    }

    return 0;
}