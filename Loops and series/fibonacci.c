#include<stdio.h>
int main(){
    int n,first=0,second=1,next,c;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("first%d terms of fibonacci series are ",n);

    c=0;
    while(c<=n-1){
        if(c<=1)
        next=c;
        else{
            next=first+second;
            first=second;
            second=next;
        
        }
        printf("%d",next);
        c++;

    }
    return 0;
}