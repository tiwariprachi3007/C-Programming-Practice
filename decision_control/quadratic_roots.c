#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,r1,r2,d;
    printf("enter the value of the equation:");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;

    if(d>0)
    {
r1=-b+sqrt(d)/2*a;
r2=-b-sqrt(d)/2*a;
 printf("roots are real and unequal");
    printf("%f&f",r1,r1);
 }

else
printf("the roots are imaginary ");
return 0;
}