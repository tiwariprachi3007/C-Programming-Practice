#include<stdio.h>
#include<string.h>

int main(){
    char s1[20],s2[30];
    printf("enter the first string:");
    gets(s1);
    printf("enter the second string :");
    gets(s2);
    if(strcmpi(s1,s2)==0){
        printf("both strings are equal");
    }
        else{
        printf("both strings are not equal");
        }
return 0;
    }