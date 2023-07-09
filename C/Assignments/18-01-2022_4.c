#include<stdio.h>
typedef struct{
    int roll;
    char name[20];
    float cgpa;
} student;

void pointerdisplay(student *x){
    printf("\nStudent info:\n\n");
    printf("Student name:%s\n",(*x).name);
    printf("Roll Number:%d\n",(*x).roll);
    printf("CGPA:%3.1f\n",(*x).cgpa);
}

int main(){
    student s;
    printf("Enter name of the student: ");
    scanf("%s",s.name);
    printf("Enter roll number of the student: ");
    scanf("%d",&s.roll);
    printf("Enter CGPA of the student: ");
    scanf("%f",&s.cgpa);
    printf("\n");
    pointerdisplay(&s);
    return 0;
}
