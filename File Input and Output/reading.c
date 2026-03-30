
    #include <stdio.h>
#include <stdlib.h>

struct ThreeNumber {
    int n1, n2, n3;
};

int main() {
    int n;
    struct ThreeNumber num;
    FILE *fptr;

    // File open in read-binary mode
    if ((fptr = fopen("fileName.bin", "rb")) == NULL) {
        printf("ERROR OPENING FILE\n");
        exit(1);
    }

    // Loop corrected: semicolons instead of commas
    for (n = 1; n < 5; n++) {
        // fread return check
        if (fread(&num, sizeof(struct ThreeNumber), 1, fptr) == 1) {
            printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
        } else {
            printf("End of file reached or read error.\n");
            break;
        }
    }

    fclose(fptr);
    return 0;
}
