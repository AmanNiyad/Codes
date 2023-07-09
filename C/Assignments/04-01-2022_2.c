#include<stdio.h> 
int main(){  
    int a[5]={1,2,3,4,5},i; 
    int *p; 
    p=&a[5];
    printf("The original array is:  ");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);}
    printf("\nThe reversed array is:  ");
    for(i=1;i<=5;++i){
    printf("%d ",*(p-i));}
    return 0; 
}