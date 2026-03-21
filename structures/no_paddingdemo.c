#include<stdio.h>
#include<string.h>

#pragma pack(1) // This directive tells the compiler to pack the structure members with 1-byte alignment, effectively eliminating any padding between members.

struct student1{
    int id1;
    int id2;
    char name;
    char c;
    float percentage;
};

int main(){
    struct student1 a;
    printf("size of structure 1 in bytes :%d",sizeof(a));
    printf("\n Address of id1:%u",&a.id1);
    printf("\n Address of id2=%u",&a.id2);
    printf("\n Address of name=%u",&a.name);
    printf("\n Address of c=%u",&a.c);
    printf("\n Address of percentage=%u",&a.percentage);
    return 0;
}
