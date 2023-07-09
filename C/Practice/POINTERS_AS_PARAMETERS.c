#include <stdio.h>
int salaryhike(int  *var, int b)
{
    *var = *var+b;
}
int main()
{
    int salary=0, bonus=0,p;
    printf("Enter the employee current salary:"); 
    scanf("%d", &salary);
    printf("Enter bonus:");
    scanf("%d", &bonus);
    p=salaryhike(&salary, bonus);
    printf("Final salary: %d", salary);
    return 0;
}