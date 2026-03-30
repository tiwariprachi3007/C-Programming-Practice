#include <stdio.h>
#include <stdlib.h>

struct ThreeNumber {
    int n1, n2, n3;
};

int main() {
    int n;
    struct ThreeNumber num;
    FILE *fptr;

    // Open file in binary write mode
    fptr = fopen("fileName.bin", "wb");
    if (fptr == NULL) {
        perror("Error opening file"); // better error message
        exit(EXIT_FAILURE);
    }

    // Write 5 records into the file
    for (n = 0; n < 5; n++) {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;

        if (fwrite(&num, sizeof(struct ThreeNumber), 1, fptr) != 1) {
            perror("Error writing to file");
            fclose(fptr);
            exit(EXIT_FAILURE);
        }
    }

    fclose(fptr); // Close file
    printf("Data written successfully to fileName.bin\n");
    return 0;
}
