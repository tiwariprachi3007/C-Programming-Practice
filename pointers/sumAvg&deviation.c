#include<stdio.h>
#include,<math.h>

void stats(int *,int *,double*);

int main(){
    int sum,avg;
    double stddev;
stats(&sum,&avg,&stddev);
    printf("sum=%d\n",sum);
    printf("average=%d\n",avg);
    printf("standard deviation=%lf\n",stddev);
    return 0;
}

void stats(int *sum,int *avg,double *stddev){
    int n1,n2,n3,n4,n5;
    printf("enter five integers:");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *avg=*sum/5.0;
    *stddev=sqrt((pow(n1-*avg,2)+pow(n2-*avg,2)+pow(n3-*avg,2)+pow(n4-*avg,2)+pow(n5-*avg,2))/5.0);
}