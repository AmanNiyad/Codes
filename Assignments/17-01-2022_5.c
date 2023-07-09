#include<stdio.h>
int summation(int n){
    if(n==0){
        return n;
    }
    else{
        return (n+summation(n-1));
    }
}
int main(){
    int x,sumadd;
    printf("Enter the number upto which you want to find summation:\n");
    scanf("%d",&x);
    sumadd=summation(x);
    printf("The summation of the numbers from 1 to %d is %d",x,sumadd);
    return 0;
}