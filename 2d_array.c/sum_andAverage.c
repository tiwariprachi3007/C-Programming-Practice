#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter the number of rows :");
    scanf("%d",&rows);
    printf("enter the no. of columns:");
    scanf("%d",&cols);


    int arr[rows][cols];
    int sum=0;
    float average;

    printf("elements of the array:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];

        }
    }

    //average
    average=(float)sum/(rows*cols);
    //output
    printf("sum of all elements :%d",sum);
    printf("average of all elements:%f",average);
}