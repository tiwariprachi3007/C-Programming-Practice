#include<stdio.h>

void minmax(int *a,int *b ,int *min,int *max){

if(*a>*b){
    *max=*a;
    *min=*b;
}

else{
    *max=*b;
    *min=*a;
}
}

int main(){
    int x,y,min,max;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    minmax(&x,&y,&min,&max);
    printf("minimum is %d\n",min);
    printf("maximum is %d\n",max);
}