#include<stdio.h>
struct book{
    char bname[20];
    int page;
    float price;
};
void main(){
    struct book b1;
    printf("enter the details of the book:\n");
    scanf("%s%d%f",&b1.bname,&b1.page,&b1.price);
    display(b1);

}
display(struct book b2)
{
    printf("the details are as follows :");
  printf("%s\t%d\t%f",b2.bname,b2.page,b2.price);

}