#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("Master.txt","w");
    if(fp1==NULL)
    {
        printf("File creation error");
        return 0;
    }
    printf("enter characters:");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp1);
    }
    fclose(fp1);
    fp1=fopen("Master.txt","r");
    fp2=fopen("copy.txt","w");
    if(fp1==NULL||fp2==NULL)
    {
        printf("file cannot be copied");
        return 0;
    }
    printf("\ncopying");
    while((ch=getc(fp1))!=EOF)
    {
        putc(ch,fp2);
    }
    printf("\nCopied!");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
