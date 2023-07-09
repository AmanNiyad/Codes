#include<stdio.h> 
int main(){  
    int a,b,c;  
    int *p=&a; 
    int *q=&b; 
    int *r=&c; 
    printf("Enter the values\n");
    scanf("%d %d %d",p,q,r); 
    if(*p>*q){
        if(*p>*r){
            printf("%d is max number\n",a); 
        } 
        else{
            printf("%d is max number\n",c);
        } 
    } 
    else{
        if(*q>*r){
            printf("%d is max number\n",b);  
        } 
        else {
             printf("%d is max number\n",c); 
        }
    }  
    if(*p<*q){
        if(*p<*r){
            printf("%d is min number\n",a); 
        } 
        else{
            printf("%d is min number\n",c);
        } 
    } 
    else {
        if(*q<*r){
            printf("%d is min number\n",b);  
        } 
        else{
             printf("%d is min number\n",c); 
        }
    }  
    return 0; 
}