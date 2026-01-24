#include<stdio.h>
int main(){
    int i;
    char str[100];
    printf("enter a string :");
    gets(str);
    i=0;
   while(str[i]!='\0') 
    { 
        if(str[i]>='A' && str[i]<='Z') 
        { 
            str[i] = str[i] + 32; 
        } 
        else if(str[i]>='a' && str[i]<='z') 
        { 
            str[i] = str[i] - 32; 
        } 
        i=i+1; 
    } 
    printf("Toggled String: "); 
    puts(str); 
    return 0; 
}