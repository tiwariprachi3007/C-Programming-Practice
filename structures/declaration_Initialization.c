#include <stdio.h>
#include <string.h>

int main() {
    struct info {
        int sno;
        char name[20];
        char add[20];
    } s1, s2;

    // Different ways of initializing structure variables
    struct info stu1 = {1, "ajay", "dehradun"};

    struct info stu2, stu3;
    stu2.sno = 2;
    strcpy(stu2.name, "rashmi");
    strcpy(stu2.add, "delhi");

    printf("Enter the sno, name and address of third student:\n");
    scanf("%d %s %s", &stu3.sno, stu3.name, stu3.add);

    printf("\nDetails of students are:\n");
    printf("1st student -> %d\t%s\t%s\n", stu1.sno, stu1.name, stu1.add);
    printf("2nd student -> %d\t%s\t%s\n", stu2.sno, stu2.name, stu2.add);
    printf("3rd student -> %d\t%s\t%s\n", stu3.sno, stu3.name, stu3.add);

    return 0;
}
