#include <stdio.h>

int main() {
    int arr[2][10];   // 2 rows (tables), 10 columns (multiples)
    int flat[20], k = 0;

    // Fill table of 2
    for(int i = 0; i < 10; i++) {
        arr[0][i] = 2 * (i+1);
    }

    // Fill table of 3
    for(int i = 0; i < 10; i++) {
        arr[1][i] = 3 * (i+1);
    }

    // Print original tables
    printf("Original Tables:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Flatten into 1D array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            flat[k++] = arr[i][j];
        }
    }

    // Sort the flattened array (Bubble Sort)
    for(int i = 0; i < 20-1; i++) {
        for(int j = i+1; j < 20; j++) {
            if(flat[i] > flat[j]) {
                int temp = flat[i];
                flat[i] = flat[j];
                flat[j] = temp;
            }
        }
    }

    // Print sorted values
    printf("\nSorted Values (from both tables):\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", flat[i]);
    }

    return 0;
}