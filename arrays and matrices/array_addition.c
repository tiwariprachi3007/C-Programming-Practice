#include <stdio.h>

int main() {
    int size1, size2;

    // Input sizes
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2];
    int maxSize = (size1 > size2) ? size1 : size2;
    int result[maxSize];

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Add arrays
    int minSize = (size1 < size2) ? size1 : size2;
    int i;
    for (i = 0; i < minSize; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    // Copy remaining elements
    if (size1 > size2) {
        for (; i < maxSize; i++) {
            result[i] = arr1[i];
        }
    } else {
        for (; i < maxSize; i++) {
            result[i] = arr2[i];
        }
    }

    // Print result
    printf("Resultant array: ");
    for (int i = 0; i < maxSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}