// write a c program to input name,rollno,and percentage of n students. calculate average percentages of class and print the details of all students having percentage greatre than or equal to average percentage

#include<stdio.h>

struct student{
    char name[50];
    int rn;
    float per;
};

int main(){
    int n,i;
    float sum=0,avg;

    printf("enter the number of students:");
    scanf("%d",&n);
struct student students[n];

// Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rn);
        printf("Percentage: ");
        scanf("%f", &students[i].per);

        sum += students[i].per;
    }

    // Calculate average
    avg = sum / n;
    printf("\nClass Average Percentage = %.2f\n", avg);

    // Print students with percentage >= average
    printf("\nStudents with percentage >= average:\n");
    for (i = 0; i < n; i++) {
        if (students[i].per >= avg) {
            printf("Name: %s, Roll No: %d, Percentage: %.2f\n",
                   students[i].name, students[i].rn, students[i].per);
        }
    }

    return 0;
}

