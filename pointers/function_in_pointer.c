#include<stdio.h>
void square(int n);
void _square(int *n);

int main(){
    int num;
    printf("enter a number to find its square:");
    scanf("%d",&num);
    square(num);

    _square(& num);
    printf("value of num after calling _square is :%d\n",num);
    scanf("%d",&num);
    return 0;
}

//call by value

void square (int n){
n=n*n;
printf("square is :%d\n",n);

}

//call by reference
void _square(int*n){
    *n =(*n)*(*n);
    printf("square is :%d\n",*n);

}