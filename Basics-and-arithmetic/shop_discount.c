#include <stdio.h> 
int main() 
  { 
   int m_qty,bill;  
   printf("Enter the number of mango"); 
   scanf("%d", &m_qty); 
   bill=5*m_qty; 
   if(bill>500) 
   bill=bill-bill*10/100; 
   printf("%d", bill); 
   return 0; 
  } 
   