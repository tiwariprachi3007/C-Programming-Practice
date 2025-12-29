#include<stdio.h>
int main(){

    int i,x,y,sume=0,sumo=0;
    printf("enter range");
    scanf("%d%d",&x,&y);
    i=x;
    while(i<=y)
    {
        if(i%2==0)
        sume=sume+i;
        else
        sumo=sumo+i;
        i++;

    }

printf("sum of even numbers is %d ",sume);
printf("sum of odd number is %d",sumo);
return 0;
}