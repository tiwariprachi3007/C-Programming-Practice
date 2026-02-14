#include<stdio.h>
int main(){
    char s1[20],s2[20];
    puts("enter a string");
    gets(s2);
    strcpy(s1,s2);
    puts("copied string is :");
    puts(s1);
    return 0;
}