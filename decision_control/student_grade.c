#include<stdio.h> 
int main() 
  { 
   float  s1, s2,s3,s4,percent; 
   printf("Enter the value of s1, s2,s3,s4\n"); 
   scanf("%f%f%f%f", &s1,& s2,&s3, &s4);
   percent=(s1+s2+s3+s4)*100/400; 
   if (percent>=85) 
       printf("Grade A");  
   else if(percent>=70) 
    printf("Grade B"); 
   else if(percent>=55) 
    printf("Grade C");  
   else 
       printf("Grade D"); 
   return 0;
  }