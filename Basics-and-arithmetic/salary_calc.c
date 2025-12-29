#include<stdio.h> 
int main() 
 { 
  float hra, ta, da; 
  float bas_sal, total_sal; 
  printf("Enter Basic Salary"); 
  scanf("%f",& bas_sal); 
  hra= bas_sal *3/100; 
  ta= bas_sal *5/100; 
  da= bas_sal *3/100; 
  total_sal= bas_sal +hra+ta+da; 
  printf("Total Salary is %f", total_sal); 
  return 0; 
 }