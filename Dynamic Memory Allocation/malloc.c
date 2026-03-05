#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter the size of elements:");
    scanf("%d",&size);

    int *arr=(int*)malloc(sizeof(int)*size);
    if(arr==NULL){
        printf("Not enough memory");
        return 1;
    }

    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }

    for(int i=0;i<size;i++){
        printf("enter element number %d",i+1);
        scanf("%d",&arr[i]);
    }

    long sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("sum of elements is %ld",sum);
    return 0;
}