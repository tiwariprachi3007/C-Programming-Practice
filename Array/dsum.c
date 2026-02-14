#include<stdio.h>
int main(){
int i,j,r,c,arr[10][10],ld,rd;
    printf("enter the size of the square matrix:");
    scanf("%d%d",&r,&c);

    if(r==c)
    {
        printf("enter the matrix:");
        for(i=0;i<=r-1;i++){
            for(j=0;j<=c-1;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        ld=0;
        rd=0;
        for(i=0;i<=r-1;i++){
            ld=ld+arr[i][i];
            rd=rd+arr[i][r-1-i];
        }
        printf("sum of left diagonal is %d\n",ld);
        printf("sum of right diagonal is %d\n",rd);
    }
    else 
    {
        printf("not a square matrix\n");
    }
    return 0;
}