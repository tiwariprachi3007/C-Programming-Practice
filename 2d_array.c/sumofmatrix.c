#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of columns");
    scanf("%d",&c);
    printf("enter all elements:");


    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);

        }
    }

    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }

    printf("the sum of the matrix is %d",sum);

    return 0;
}