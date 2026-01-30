/*
#include<stdio.h>
int main(){
    int x=10;
    int *ptr=&x;
    printf("value of x :%d\n",x);
    printf("address of x : %p\n",&x);
    printf("value via pointer:%d\n",*ptr);

    return 0;

}
    */


    #include<stdio.h>
    int main(){
        int i;
        printf("address of i=%u\n" ,&i);
        printf("address of i=%p\n" ,&i);
        printf("value of i =%d\n",i);
        printf("value of i =%d\n",*(&i));
        return 0;
    }