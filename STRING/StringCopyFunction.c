#include<stdio.h>

    void my_strcpy(char[],char[]);
   
    int main(){
        char name[100],copy[100];
        printf("enter the string:");
        gets(name);
        my_strcpy(copy,name);
        printf("copied string :");
        puts(copy);
        return 0;
    }

    void my_strcpy(char copy[],char name[]){
        int i=0;
        while(name[i]!='\0'){
            copy[i]=name[i];
            i=i+1;
        }
        copy[i]='\0';

    }
