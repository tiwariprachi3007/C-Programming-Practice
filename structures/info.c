// write a c program to store and print information of n students where information comprises of students name ,sno,and marks in 4 subjects

#include <stdio.h>

int main() {
    typedef struct {
        int sno;
        char name[20];
        int submarks[4];
    } student;

    student s1[10];
    int i, j, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter the sno and name: ");
        scanf("%d %s", &s1[i].sno, s1[i].name);

        printf("Enter the marks in 4 subjects: ");
        for (j = 0; j < 4; j++) {
            scanf("%d", &s1[i].submarks[j]);
        }
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("Sno: %d, Name: %s\n", s1[i].sno, s1[i].name);
        printf("Marks: ");
        for (j = 0; j < 4; j++) {
            printf("%d ", s1[i].submarks[j]);
        }
        printf("\n");
    }

    return 0;
}