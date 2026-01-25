#include<stdio.h>

 void my_strrev(char str[]);

int main()
{
    char str[100];
    printf("enter a string: ");
    gets(str);
    my_strrev(str);
    printf("reversed string :");
    puts(str);
    return 0;

}

void my_strrev(char str[])
{
    int i,j;
    int len=0;
    char temp;
    while(str[len]!='\0')
    {
        len=len+1;
    }
    for(i=0,j=len-1;i<=len-1,i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    return 0;

}

