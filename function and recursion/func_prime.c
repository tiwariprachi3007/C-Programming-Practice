#include<stdio.h>
int find_prime(int);
 int main(){
    int num,p;
    printf("enter any no:");
    scanf("%d",&num);
    p=find_prime(num);
    if(p==1)
    printf("%d is a prime number",num);

    else
    printf("%d is not a prime number:",num);
    return 0;
 }

 int find_prime(int num)
 {
    int i;
    if(num==1)
    return 0;

    else{
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            return 0;

        }

    }
    return 1;
    
 }
      