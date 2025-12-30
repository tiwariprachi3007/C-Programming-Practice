#include<stdio.h>

void calculate_price(float value);
int main(){

    float value;
    printf("enter the value of the product:");
    scanf("%f",&value);
    calculate_price(value);
    printf("value is:%f",value);
    return 0;
}

void calculate_price(float value){

    value=value+(0.18*value);
    printf("final price:%.2f\n",value);
}