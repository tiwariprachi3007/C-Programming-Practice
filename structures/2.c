#include <stdio.h>

struct book {
    char name[20];   // fixed size for name
    float price;
    int pages;
};

int main() {
    struct book b[3];   // array of 3 books
    int i;

    printf("Enter names, prices and no. of pages of 3 books:\n");
    for(i = 0; i < 3; i++) {
        scanf("%s %f %d", b[i].name, &b[i].price, &b[i].pages);
    }

    printf("\nAnd this is what you entered:\n");
    for(i = 0; i < 3; i++) {
        printf("Book %d: %s %.2f %d\n", i+1, b[i].name, b[i].price, b[i].pages);
    }

    return 0;
}
