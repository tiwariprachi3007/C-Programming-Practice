#include<stdio.h>

void swap(int *,int *);

int main(){
    int x=4;
    int y=87;
    swap(&x,&y);
    printf("value of x is %d\n",x);
    printf("value of y is %d\n",y);

}

void swap(int *ptr1,int *ptr2){
    printf("value of ptr1 is %d\n",*ptr1);
    printf("value of ptr2 is %d\n",*ptr2);
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("value of ptr1 is %d\n",*ptr1);
    printf("value of ptr2 is %d\n",*ptr2);
}