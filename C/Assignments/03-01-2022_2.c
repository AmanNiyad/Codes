#include<stdio.h> 
int main(){  
    int a[3]; 
    int *m=&a[2]; 
    printf("Enter third element of the array  "); 
    scanf("%d",m);  
    for(int i=1;i>=0;i--){
        *m=*m-2; 
        printf("The element number %d is: %d\n",(i+1),*m); 
    }   
    return 0; 
}