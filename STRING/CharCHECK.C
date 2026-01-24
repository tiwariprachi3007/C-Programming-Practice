#include<stdio.h>
int main(){
    int i;
    char str[100];
    printf("enter a string");
    gets(str);
    i=0;
    while(str[i]!='\0'){
      
        if  (str[i]>='A' && str[i]<='Z')
        {
            printf("%c is capital letter\n",str[i]);
        }
        else if (str[i]>='a' && str[i]<='z')
        {
            printf("%c is small letter\n",str[i]);
        }
        else if (str[i]>='0'&& str[i]<='9')
        {
            printf("%c is digit \n",str[i]);
        }
        else if (str[i]>='a'&& str[i]<='z')
        {
            printf("%c is digit \n",str[i]);

        }
        else {
            printf("%c is a special character\n",str[i]);

        }
        i=i+1;
    }
    return 0;
}