#include<stdio.h>
#include<string.h>

int main(){
char str1[]="Hello";
char str2[]="World";
//strcat usage
strcat(str1,str2);
printf("concatenated string is %s\n",str1);
return 0;
}