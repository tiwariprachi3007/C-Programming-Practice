#include<stdio.h>
int sum(int);

int main(){
    int n,s;
    printf("enter no. of integers:");
    scanf("%d",&n);
    s=sum(n);
    printf("The sum of entered integers is %d",s);
    return 0;


}

int sum(int n)
{
    int i,num,result=0;
    printf("enter integers:");
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        result=result+num;

    }
    return result;
    
}