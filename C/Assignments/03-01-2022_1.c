#include<stdio.h> 
int main(){
    int *x,*y,m,a,b; 
    x=&a;
    y=&b;
    printf("Enter value of first number ");
    scanf("%d",&a);
    printf("Enter value of second number ");
    scanf("%d",&b);
    m =*x;
    *x=*y;
    *y=m;
    printf("After  Swapping:\nFirst Number is: %d, Second Number is: %d\n",a,b);
    return 0; 
}