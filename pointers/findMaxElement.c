#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    int *ptr;
    int max;
    
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    max=*ptr; //let the first element is the max
    //traverse the array using pointer
    for(i=1;i<n;i++){
        ptr++;
        if(*ptr>max){
            max=*ptr;
        }
    }
    printf("maximum element is %d\n",max);
    return 0;
}