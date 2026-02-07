#include<stdio.h>
int main(){
    int i=3;
    //int *j =&i;
    int *j;
    j=&i;
    printf("address of i=%p\n",&i);
    printf("address of i=%p\n",j);
    printf("address of j=%p\n",&j);
    printf("value of j=%d\n",j);
    printf("value of i=%d\n",i);
    printf("value of i=%d\n",*(&i));
    printf("value of i=%d\n",*j);



    return 0;
}