#include<stdio.h>

 void print_marks (int marks[],int no_of_students);

int main(){
    int marks[5];
    int no_of_students=5;

    for(int i=0;i<no_of_students;i++){
        printf("Enter the marks for student %d:",i+1);
        scanf("%d",&marks[i]);
    }

    print_marks(marks,no_of_students);

    return 0;
}

void print_marks(int students_mark[],int students_count){

    for(int i=0;i<students_count;i++){
        printf("marks of students %d are: %d\n",i+1,students_mark[i]);

    }
} 
