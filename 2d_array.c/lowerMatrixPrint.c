#include <stdio.h> 
int main() 
{ 
    int i, j, r, c, arr[10][10], rsum, csum; 
    printf("Enter the Row and Column: "); 
    scanf("%d%d",&r,&c); 
    printf("Enter the Matrix: "); 
    for(i=0; i<=r-1; i++) 
    { 
        for(j=0; j<=c-1; j++) 
        { 
            scanf("%d",&arr[i][j]); 
        } 
    } 
    printf("Lower Triangle\n"); 
    for(i=0; i<=r-1; i++) 
    { 
        for(j=0; j<=c-1; j++) 
        { 
            if(i>=j) 
            { 
                printf("%d ",arr[i][j]); 
            } 
        } 
        printf("\n"); 
    } 
    return 0; 
