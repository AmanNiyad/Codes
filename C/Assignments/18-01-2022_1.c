#include<stdio.h>
typedef struct{
    int roll;
    char name[20];
    float cgpa;
} student;

int main(){
    student s;

    printf("Enter name of the student: ");
    scanf("%s",s.name);
    printf("Enter roll number of the student: ");
    scanf("%d",&s.roll);
    printf("Enter CGPA of the student: ");
    scanf("%f",&s.cgpa);

    printf("\nStudent info:\n\n");
    printf("Student name: %s\n",s.name);
    printf("Roll Number: %d\n",s.roll);
    printf("CGPA: %3.1f\n",s.cgpa);

    return 0;
}