#include<stdio.h>
int main(){

    //ld=left diagonal
    //rd=right diagonal
    int i,j,r,c,arr[10][10],ld,rd;
    printf("enter the row and column:");
    scanf("%d",&r,&c);
    if(r==c){
        printf("enter the matrix:");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        ld=0;
        rd=0;
        for(i=0;i<r;i++){
            ld=ld+arr[i][i];
            rd=rd+arr[i][r-i-1];
        }
        printf("sum of left diagonal :%d\n",ld);
        printf("sum of right diagonal is %d\n",rd);

    }
    else{
        printf("sum of left diagonal is %d\n",ld);
        printf("sum of right diagonal is %d\n",rd);
    }
    return 0;
}