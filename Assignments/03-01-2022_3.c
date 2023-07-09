#include<stdio.h> 
int main(){  
    int a,b; 
    int *p,*q; 
    p=&a;
    q=&b;
    printf("Enter the value of first variable  "); 
    scanf("%d",p); 
    printf("Enter the value of second variable  ");
    scanf("%d",q);
    printf("the two values are %d and %d",a,b);
    
    return 0; 
}