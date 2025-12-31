#include<stdio.h>

void swap(int a ,int b);

int main(){

    int a ,b,temp;
    printf("enter two number sto swap:");
    scanf("%d %d",&a,&b);

    printf("x =%d y=%d", a,b);
    swap(a,b);
    
    return 0;
}

void swap(int a ,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping inside swap function a=%d b=%d\n",a,b);

}