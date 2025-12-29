#include<stdio.h>

int sum(int);
int main(){
    int n,ans;

printf("enter no.\n");
scanf("%d",&n);
ans=sum(n);
printf("sum of digits of a given no. is %d",ans);
return 0;

}

int sum(int n)
{
    if(n>0)
    return n%10+sum(n/10);
    else
    return 0;
}