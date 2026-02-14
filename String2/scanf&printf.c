#include <stdio.h>
#include <string.h>

int main() {
    char str[50];   // buffer to hold the string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // safer alternative to gets()

    // remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("You typed: %s\n", str);

    return 0;
}