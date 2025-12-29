#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,si,A,ci;
    printf("enter the value of p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    A=p*pow(1+(r+100),t);
    ci=A-p;
    printf("The simple interest is %f",si);
    printf("The compound interest is %f",ci);
    return 0;
}