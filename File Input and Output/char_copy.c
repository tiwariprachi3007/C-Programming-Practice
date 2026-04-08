#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceName[100], targetName[100];
    char ch;

   
    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter target file name: ");
    scanf("%s", targetName);

    
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file.\n");
        exit(1);
    }


    targetFile = fopen(targetName, "w");
    if (targetFile == NULL) {
        printf("Error: Cannot open target file.\n");
        fclose(sourceFile);
        exit(1);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

   
    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully!\n");
    return 0;
}
