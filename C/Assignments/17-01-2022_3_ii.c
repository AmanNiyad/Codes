#include<stdio.h>
void eachdigitreverse(int n){
    int m;
    m=n%10;
    if(n==0){
        return;
    }
    printf("%d,",m);
    eachdigitreverse(n/10);
}
int main(){
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    printf("Each digit of the entered number in the reverse direction is ");
    eachdigitreverse(x);
    return 0;
}