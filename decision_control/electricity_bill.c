 
#include<stdio.h> 
int main() 
{float unit, bill,rate; 
printf("enter the units "); 
scanf("%f",&unit); 
if(unit>2000) 
rate=7; 
else if((unit<=2000)&&(unit>1000)) 
rate=6; 
else 
rate=5; 
bill=rate*unit; 
printf("\nBILL :%f",bill); 
return 0; 
}