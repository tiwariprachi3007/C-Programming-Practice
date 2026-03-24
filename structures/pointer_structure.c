#include <stdio.h>
#include <string.h>

struct book {
    char BName[20];
    char BAuthor[20];
    char Publisher[20];  // safer than char*
    float price;
} bok;

int main() {
    // Initialize values
    strcpy(bok.BName, "C Programming");
    strcpy(bok.BAuthor, "Dennis Ritchie");
    strcpy(bok.Publisher, "Prentice Hall");
    bok.price = 499.50;

    // Print values
    printf("Book name     : %s\n", bok.BName);
    printf("Author name   : %s\n", bok.BAuthor);
    printf("Publisher name: %s\n", bok.Publisher);
    printf("Price         : Rs %.2f\n", bok.price);

    return 0;
}