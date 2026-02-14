#include<string.h>
#include<stdio.h>
int main(){
    char s1[30],s2[30];
    printf("enter thr first string:");
    gets(s1);
    printf("enter the second string :");
    gets(s2);

    if(strcmp(s1,s2)==0){
        printf("both strings are equal");
    }
    else if(strcmp(s1,s2)>0){
    printf("first string is greater than the seond string");
    }

    else
    printf("second string is greater than the first string");
    return 0;
}