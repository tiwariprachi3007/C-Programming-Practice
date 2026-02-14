#include<stdio.h>
int main(){

int i,j,row,col,rsum,rcol,,arr[10][10];
printf("enter the number of row and column:");
scanf("%d%d",&row,&col);

printf("enter the matrix :");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
    }
}

//row sum
for(i=0;i<row;i++){
    rsum=0;
    for(j=0;j<col;j++){
        rsum=rsum+arr[i][j];
    }
    printf("sum of row %d is %d\n",i+1,rsum);
}

//column sum
for(i=0;i<col;i++){
    rcol=0;
    for(j=0;j<row;j++){
        colsum=colsum+arr[i][j];
    }
    printf("sum of columns %d is %d\n",i+1,colsum);
}
return 0;
}