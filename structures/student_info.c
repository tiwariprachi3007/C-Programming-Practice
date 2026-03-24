#include <stdio.h>

int main() {
    typedef struct {
        int sno;
        char name[20];
    } student;

    student s1;

    printf("Enter the details of student:\n");
    printf("Enter the sno and name: ");
    scanf("%d %s", &s1.sno, s1.name);

    printf("The details of the student are:\n");
    printf("sno - %d\n", s1.sno);
    printf("name - %s\n", s1.name);

    return 0;
}