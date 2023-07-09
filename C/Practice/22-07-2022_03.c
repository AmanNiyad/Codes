/*without using Modulus operator, find even and odd numbers
Multiplication division    and  or  xor  shift operators*/
#include <stdio.h>
int main(){
    int num=16;
    //USING Bitwise XOR
    if((num ^ 1)==(num+1)){
        printf("Even");
    }
    else if ((num ^ 1)==(num-1)){
        printf("Odd");
    }
}