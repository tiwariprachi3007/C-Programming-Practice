/*
//call by value 

#include<stdio.h>
void swapv(int x ,int y);

int main(){
    int a =10,b=20;
    swapv(a,b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}

void swapv(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d y=%d\n",x,y);
}

*/

//call by value using pointers 

#include<stdio.h>
void swapv(int *x ,int *y);
int main(){
    int a =10,b=20;
    
    printf("before swap: a=%d b=%d\n",a,b);
    swapv(&a,&b);   //pass address
    printf("after swap:a=%d b=%d\n",a,b);
    return 0;
}

void swapv(int*x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}