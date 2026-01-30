#include<stdio.h>
int main(){
    int stud[4][2];
    int i,j;
    for(i=0;i<4;i++){
        printf("enter rollno. nad marks:");
        scanf("%d%d",&stud[i][0],&stud[i][1]);
    }
    for(i=0;i<=3;i++){
        printf("rollno.=%d marks=%d\n",stud[i][0],stud[i][1]);
    }
    return 0;
}