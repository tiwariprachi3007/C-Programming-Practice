#include<stdio.h>
int main(){
    float f,c;
    printf("enter the temp. in celsius :");
    scanf("%f",&c);
    f=c*1.8+32;
    printf("the temp in fahrenheit is %.2f",f);
    return 0;

}