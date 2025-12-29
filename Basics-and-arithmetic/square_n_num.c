#include<stdio.h>
int main(){

    int i,n,num;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the number");
        scanf("%d",&num);
        printf("the square is %d\n",num*num);

    }
    return 0;
}