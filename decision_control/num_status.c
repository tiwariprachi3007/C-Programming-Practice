#include<stdio.h> 
int main() 
  { 
   int  num; 
   printf("\n Enter the number:"); 
   scanf("%d",&num); 
   if(num>0) 
    printf("\n The number is positive"); 
   else if(num <0) 
    printf("\n The number is negative "); 
   else  
    printf("\n The number is zero "); 
   return  0;  
  }  