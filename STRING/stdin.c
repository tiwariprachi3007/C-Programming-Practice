#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    printf("enter your name:");
    fgets(name,20,stdin);

    char name2[20];
    strcpy(name2,name);
    printf("%s has been copied to %s",name,name2);
    return 0;
}