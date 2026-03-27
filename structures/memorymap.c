// memory map of structure elements 

#include<stdio.h>
int main(){
     struct book{
        char name;float price;int pages;
     };
     struct book b1={'c','100','200'};

     printf("address of name =%u\n",&b1.name);
        printf("address of price =%u\n",&b1.price);
        printf("address of pages =%u\n",&b1.pages);
        return 0;
}