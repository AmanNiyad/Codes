#include<stdio.h>
void callbyval(int a){
    a=a+2;
    printf("Call by value operation - incrementing passed value by 2 via a different variable...\n\n");
}
void callbyref(int *b){
    *b=*b+2;
    printf("Call by reference operation - incrementing value by 2 by passing address..\n\n");
}
int main(){
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);

    callbyval(x);
    printf("The entered value after call by value operation is %d\n\n",x);

    callbyref(&x);
    printf("The entered value after call by reference operation is %d\n\n",x);

    return 0;
}