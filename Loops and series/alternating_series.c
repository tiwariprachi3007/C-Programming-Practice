#include<stdio.h> 
int main() 
  { 
   int i,n,sign; 
   float sum=0; 
   printf("Enter a number: "); 
   scanf("%d",&n); 
   i=1,sign=1; 
   while(i<=2*n-1) 
    { 
     sum=sum+(1/(float)i)*sign; 
     sign=sign*(-1); 
     i=i+2; 
    }   
   printf("Sum is %f",sum); 
   return 0; 
  } 