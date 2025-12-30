#include<stdio.h>
//function prototypes
void namaste();
void bonjour();


//main function
int main(){
    char ch;
    printf("Enter f for french and i for indian:");
    scanf("%c",&ch);

    if(ch=='i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}

//function definations
void namaste(){
    printf("NAMASTE USER \n");
}

void bonjour(){
    printf("BONJOUR USER \n");
}