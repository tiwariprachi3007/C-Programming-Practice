/* #include<stdio.h>
int main(){

    char name[3];
    float price[3];
    int pages[3],i;

    printf("enter names ,prices and no. of pages of 3 books \n");
    for(i=0;i<=2;i++)
        scanf("%c%f%d",&name[i],&price[i],&pages[i]);
    printf("and this is what you entered\n");
    for(i=0;i<=2;i++)
    printf("%c%f%d",name[i],price[i],pages[i]);
    return 0;
}
*/

#include <stdio.h>
int main() {
    char name[3];
    float price[3];
    int pages[3], i;

    printf("Enter names (single char), prices and no. of pages of 3 books:\n");
    for(i = 0; i < 3; i++) {
        scanf(" %c %f %d", &name[i], &price[i], &pages[i]); // notice the space before %c
    }

    printf("\nAnd this is what you entered:\n");
    for(i = 0; i < 3; i++) {
        printf("Book %d: %c %.2f %d\n", i+1, name[i], price[i], pages[i]);
    }
    return 0;
}
