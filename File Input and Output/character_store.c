/* C program to store character in a file and print the
characters after reading from file*/

#include<stdio.h>
int main()
{
FILE *fp1;
char ch;
fp1=fopen("Master.txt","w");
if(fp1==NULL)
{
printf("File creation error");
return 0;
}
printf("Enter characters:\n");
while((ch=getchar())!=EOF)
{
fputc(ch,fp1);
}
fclose(fp1);
fp1=fopen("Master.txt","r");
if(fp1==NULL)
{
printf("file can not be copied");
return 0;
}
printf("The characters of file are:\n");
while( (ch=fgetc(fp1))!=EOF )
{
putchar(ch);
}
fclose(fp1);
return 0;
}
