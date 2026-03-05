#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Step 1: Allocate memory for 5 integers
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Initialize values
    for (i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    printf("Original array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 3: Resize memory to hold 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Step 4: Initialize new elements
    for (i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    printf("Resized array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 5: Free memory
    free(arr);

    return 0;
}