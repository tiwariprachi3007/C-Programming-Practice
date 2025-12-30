#include<stdio.h>

void printtable(int n);

int main(){
    int n;
    printf("Enter a number to print its multiplication table:");
    scanf("%d",&n);
    printtable(n);
     return 0;
}

void printtable(int n){

    for(int i=1;i<=10;i++){
        printf("%d x %d =%d\n",n,i,n*i);
    }
}