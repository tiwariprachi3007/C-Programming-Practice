#include<stdio.h>
int main(){
    int arr[50],n,i,min,max;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    printf("enter %d elements in array",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    min=max=arr[0];
    for(i=0;i<n;i++){
        if (arr[i]>max)
        max=arr[i];

        else if(arr[i]<min)
        min=arr[i];

    }

    printf("\n The max element is :%d",max);
    printf("\n The min element is :%d",min);
    return 0;
}