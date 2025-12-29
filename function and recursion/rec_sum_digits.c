#include<stdio.h>
double nCr(int,int);
long long fact(int n);

int main(){

    int n,r;
    double ans;
    printf("enter n of nCr");
    scanf("%d",&n);
    printf("enter r of nCr");
    scanf("%d",&r);
    if(n<r)
    {
        printf("invalid output");
        return 0;

    }

    ans=nCr(n,r);
    printf("nCr=%.0lf",ans);
    return 0;

}

double nCr(int n,int r)
{
    double ans;
    ans=(double)fact(n)/(fact(r)*fact(n-r));
    return ans;
}

long long fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);

    }
    else
    {
        return 1;

    }
}