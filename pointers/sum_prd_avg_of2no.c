#include<stdio.h>

void doWork(int a , int b, int*sum,int*prd,float*avg);

int main(){

    int a=3,b=5;
    int sum,prd;
    float avg;
    doWork(a,b ,&sum,&prd,&avg);

    printf("sum=%d\n",sum);
    printf("prd=%d\n",prd);
    printf("avg=%.2f\n",avg);
    return 0;
}

void doWork(int a,int b ,int *sum,int *prd,float*avg){

    *sum=a+b;
    *prd=a*b;
    *avg=(a+b)/2.0;
}