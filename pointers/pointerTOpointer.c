#include<stdio.h>
int main(){
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("address of i =%p\n",&i);
    printf("address of i =%p\n",j);
    printf("address of i =%p\n",*k);
    printf("address of j =%p\n",&j);
    printf("address of j =%p\n",k);
    printf("value of j =%p\n",j);
    printf("value of k =%p\n",k);
    printf("value of i =%p\n",i);
    printf("value of i =%p\n",*j);
    printf("value of i =%p\n",**k);
    printf("value of i =%p\n",*(&i));
   
    return 0;
}