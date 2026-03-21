#include <stdio.h>

int main() {
    struct date {
        int day;    // day of the month
        int month;  // month of the year
        int year;   // year
    };
    
    struct book {
        char name[20];
        int roll;
        float marks;
        struct date dob;
    };
    
    struct book p[10];
    
    printf("Enter the date of birth of the student (day month year):\n");
    scanf("%d %d %d", &p[0].dob.day, &p[0].dob.month, &p[0].dob.year);
    
    printf("The date of birth is: %d/%d/%d\n", p[0].dob.day, p[0].dob.month, p[0].dob.year);
    
    return 0;
}