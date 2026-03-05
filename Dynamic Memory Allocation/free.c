#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int *arr=(int*)calloc(size,sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed");
        return 1;
    }
    for(int i=0;i<size;i++){
        printf("%d",&arr[i]);
    }
    long sum=0;
    for(int i=0;i<size;i++){
        sum =sum+arr[i];
    }

    //will free the memory allocated by calloc
    free(arr);
    arr=NULL;

    printf("The sum of all elements is %ld",sum);
    return 0;
}