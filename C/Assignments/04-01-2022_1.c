#include<stdio.h> 
int main(){
    int a[5]={1,2,3,4,5},i; 
    int *p=&a[i];
    printf("The array is : ");
    for(i=0;i<5;i++){
        printf("%d ",*p); 
        p++;}
    return 0;
}