#include<stdio.h>

int mystrcmp(char*,char*);
int main(){
    int c;
    char str1[100],str2[100];
    printf("enter the string 1 :");
    gets(str1);
    printf("enter the string 2:");
    gets(str2);
    c=mystrcmp(str1,str2);
    if(c==0){
        printf("strings are equal");
    }
    else{
        printf("strings ar not equal");
    }
    return 0;
}

int mystrcmp(char *s1,char *s2){
    while(*s1!='\0' && *s2!='\0'){
        if(*s1!=*s2){
            return -1; //strings are not equal
        }
        s1++;
        s2++;
    }
    if(*s1=='\0' && *s2=='\0'){
        return 0; //strings are equal
    }
    else{
        return -1; //strings are not equal
    }
}