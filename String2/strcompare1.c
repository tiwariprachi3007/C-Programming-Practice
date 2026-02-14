#include<stdio.h>
#include<string.h>

int main(){
    char s1[30],s2[30];
    printf("enter the first string:");
    gets(s1);
    printf("enter the second string :");
    gets(s2);
    int diff=strcmp(s1,s2);
    printf("%d",diff);
    return 0;
}