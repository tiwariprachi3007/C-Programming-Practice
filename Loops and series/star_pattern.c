  
#include <stdio.h> 
int main() 
  { 
   int n,j,c=0,k; 
   printf("Enter number of rows\n"); 
   scanf("%d",&n); 
   while(c<=n-1) 
    { 
     j=1;  
     while(j<=c) 
       { 
        printf(" "); 
        j++; 
       } 
     k=1;   
     while(k<=n-c) 
     { 
        printf("*"); 
        k++; 
      } 
     printf("\n"); 
   c++; 
    }    
     return 0;
}