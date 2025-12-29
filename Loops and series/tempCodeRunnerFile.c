 
#include<stdio.h> 

int main() 
  { 
   int num, sum = 0, temp, rem;  
   printf("Enter an integer\n"); 
   scanf("%d",&num); 
   temp=num; 
   while( num != 0 ) 
    { 
     rem=num%10; 
     sum=sum+rem*rem*rem; 
     num=num/10; 
    } 
   if(temp==sum ) 
    printf("Entered number is an armstrong number.\n"); 
   else 
    printf("Entered number is not an armstrong number.\n"); 

   return 0; 
  } 