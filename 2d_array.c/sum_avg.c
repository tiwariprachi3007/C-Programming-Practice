#include<stdio.h>
int main(){
    int m,n;
    
    printf("enter number of rows and columns:");
    scanf("%d%d",&m,&n);

    int matrix[m][n];
    int sum=0;

    //input matrix elements 
    printf("enter elements");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
            sum=sum+matrix[i][j];
        }
    }
//calculate average
float average=(float)sum/(m*n);
//output
printf("sum=%d\n",sum);
printf("average=%.2f\n",average);
return 0;
}
