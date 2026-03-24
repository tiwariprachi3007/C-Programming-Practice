#include<stdio.h>
#include<conio.h>

int main(){

    typedef struct {
        int sno;
        char name[20];
        int submarks[4];
}student;

student s1;
int j;
printf("enter the details of students:\n");
printf("enter the sno and name ");
scanf("%d %s",&s1.sno,s1.name);
printf("enter the marks of 4 subjects:\n");
for(j=0;j<4;j++){
    scanf("%d",&s1.submarks[j]);

}

printf("the details of the student are:\n");
printf("sno - %d\n",s1.sno);
printf("name - %s\n",s1.name);
printf("marks of 4 subjects are:\n");
for(j=0;j<4;j++){
    printf("%d\n",s1.submarks[j]);

}
}