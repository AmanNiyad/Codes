#include<stdio.h>
typedef struct{
    int roll;
    int semester;
    float subjects[3];
} student;

float avg(student *x){
    float avg;
    avg=((*x).subjects[0]+(*x).subjects[1]+(*x).subjects[2])/3.0;
    return avg;
}
int main(){
    student s;
    int i;
    printf("Enter roll number of the student:\n");
    scanf("%d",&s.roll);
    printf("Enter semester number of the student:\n");
    scanf("%d",&s.semester);
    printf("Enter the marks in three subjects:\n");
    for(i=0;i<3;i++){
        scanf("%f",&s.subjects[i]);
    }
    float subjectsaverage;
    subjectsaverage=avg(&s);
    printf("\nStudent info:\n\n");
    printf("Roll Number:\t%d\n",s.roll);
    printf("Semester:\t%d\n",s.semester);
    printf("Average:\t%5.2f",subjectsaverage);
    return 0;
}