/*

#include<stdio.h>
#include<string.h>

int main(){
    char s1[10],s2[10];
puts("enter the first string:");
gets(s1);
puts("enter the second string:");
gets(s2);
strcat(s1,s2);
printf("concatenated string : %s",s1);
return 0;

}

*/



#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];  // larger size to hold concatenated string

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';  // remove newline

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';  // remove newline

    strcat(s1, s2);

    printf("Concatenated string: %s\n", s1);

    return 0;
}