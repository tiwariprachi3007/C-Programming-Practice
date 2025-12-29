#include<stdio.h>
  void sort(int [],int );
 int main()
  {
     int arr[50],n,i,j,temp;
     printf("Enter no. of elements:");
     scanf("%d",&n);
     printf("Enter %d elements in array",n);
     for(i=0;i<n;i++)
      {
         scanf("%d",&arr[i]);
      }
      sort(arr,n);
     printf("Array Elements after Sorting");
      for(i=0;i<n;i++)      {
         printf("\n%d",arr[i]);
      } 
     return 0;
  }
  
  void sort(int arr[50],int n)
    {
     int temp,i,j;
     for(i=0;i<n;i++)
      {
         for(j=0;j<n-1;j++)
          {
            if(arr[j]>arr[j+1])
             {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         } 
      }
    }
