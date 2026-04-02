#include<stdio.h>
int main(){

    struct address{
        char phone[20];
        char city[25];
        int pin;

    };
    struct emp
    {
        char name[20];
        struct address a;

    };
    struct emp e={"jeru","25101280798","nagpur",10};
    printf("name=%s\n",e.name);
    printf("phone=%s\n",e.a.phone);
    return 0;
}