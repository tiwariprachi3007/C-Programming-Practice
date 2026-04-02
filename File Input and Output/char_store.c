#include <stdio.h>

int main() {
    FILE *fp1;
    int ch;  // use int for getchar/fgetc

    fp1 = fopen("Master.txt", "w");
    if (fp1 == NULL) {
        printf("File creation error\n");
        return 0;
    }

    printf("Enter characters (Ctrl+Z to stop on Windows / Ctrl+D on Linux):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, fp1);
    }
    fclose(fp1);

    fp1 = fopen("Master.txt", "r");
    if (fp1 == NULL) {
        printf("File cannot be opened\n");
        return 0;
    }

    printf("\nThe characters in the file are:\n");
    while ((ch = fgetc(fp1)) != EOF) {
        putchar(ch);
    }
    fclose(fp1);

    return 0;
}
