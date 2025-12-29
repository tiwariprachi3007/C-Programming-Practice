 
#include <stdio.h> 
int main() 
  { 
   int large, num1, num2,num3; 
   printf("Enter the value of num1, num2,num3\n"); 
   scanf("%d%d%d", &num1,& num2,&num3); 
   large=num1; 
   if(num2>large) 
   large=num2; 
   if (num3>large) 
    large=num3; 
   printf("Largest no. is %d",large); 
   return 0; 
   
  }