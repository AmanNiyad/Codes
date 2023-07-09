#include<stdio.h>
void eachdigitforward(int n){
    int m;
    m=n%10;
    if(n==0){
        return;
    }
    eachdigitforward(n/10);
    printf("%d,",m);
}
int main(){
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    printf("Each digit of the entered number in the forward direction is ");
    eachdigitforward(x);

    return 0;
}