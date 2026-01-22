#include<stdio.h>
int main(){
    int i,vow,con;
    char str[100];
    printf("enter the string ");
    gets(str);

i=0;
vow=0;
con=0;
while(str[i]!='\0')

 { 
if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || 
str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || 
str[i]=='u' || str[i]=='U') 
        { 
            vow = vow + 1; 
        } 
else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && 
str[i]<='z')) 
        { 
            con = con + 1; 
        } 
        i=i+1; 
    } 
    printf("Vowels    : %d\n",vow); 
    printf("Consonants: %d\n",con); 
    return 0; 
} 