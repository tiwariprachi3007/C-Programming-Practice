#include<stdio.h>

void my_strcat(char[],char[]);

int main(){
char s1[100],s2[100];
printf("enter first string:");
gets(s1);
printf("enter second string :");
gets(s2);

my_strcat(s1,s2);
printf("concatenated string :");
puts(s1);
return 0;
}

void my_strcat(char s1[], char s2[])
{
    int l=0,i;
    while(s1[l]!='\0')
    l++;
    i=0;

    while(s2[i]!='\0')
    {
        s1[l]=s2[i];
        i=i+1;
        l=l+1;
    }
    s1[l]='\0';
}