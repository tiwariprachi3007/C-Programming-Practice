#include<stdio.h>
int main(){
    float price[3];
    printf("enter 3 prices:\n");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);

    printf(" total price 1: %.2f\n",price[0]+(price[0]+price[0]*0.18));
    printf(" total price 2: %.2f\n",price[1]+(price[1]+price[1]*0.18));
    printf(" total price 3: %.2f\n",price[2]+(price[2]+price[2]*0.18));


    return 0;
}