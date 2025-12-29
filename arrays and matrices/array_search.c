#include<stdio.h>
int main(){
    int arrr[50],i,n,key,c=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&arrr[i]);

    printf("enter element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arrr[i]==key){
            printf("element found at %d index \n");
            c++;
        }
    }

    if(c==0)
    printf("element not found");
    return 0;
}