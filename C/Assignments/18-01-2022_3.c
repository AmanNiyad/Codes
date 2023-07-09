#include<stdio.h>
typedef struct{
    int id;
    char name[30];
    double basicsalary;
    double grosssalary;
} employee;

void empinfodisplay(employee *x){
    printf("Name: %s\n",(*x).name);
    printf("ID: %d\n",(*x).id);
    printf("Basic Salary: %lf\n",(*x).basicsalary);
    (*x).grosssalary=(*x).basicsalary+((0.1)*((*x).basicsalary))+((0.2)*((*x).basicsalary));
    printf("Gross Salary: %lf\n",(*x).grosssalary);
}

int main(){
    employee e[3]; 
    for(int i=0;i<3;i++){
        printf("Enter name of employee-%d ",i+1);
        scanf("%s",e[i].name);
        printf("Enter ID of employee-%d: ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter basic salary of employee-%d: ",i+1);
        scanf("%lf",&e[i].basicsalary);
    }
    for(int i=0;i<3;i++){
        printf("\nEmployee-%d info:\n",i+1);
        empinfodisplay(&e[i]);
    }
    return 0;
}