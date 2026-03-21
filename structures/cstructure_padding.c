#include<stdio.h>
#include<string.h>
    struct student{
        int sub1;
        int sub2;
        char grade1;
        char grade2;
        float marks;

    };

int main(){
    int i;
    struct student std1={90,65,'A','B',75.5};

    printf("size of structure in bytes :%d\n",sizeof(std1));

    printf("\naddress of sub 1:%u",&std1.sub1);
    printf("\naddress of sub 2:%u",&std1.sub2);
    printf("\naddress of grade 1:%u",&std1.grade1);
    printf("\naddress of grade 2:%u",&std1.grade2);
    printf("\naddress of marks:%u",&std1.marks);

    return 0;
}

