/*without using Modulus operator, find even and odd numbers
Multiplication division    and  or  xor  shift operators*/
#include <stdio.h>
int main(){
    int num=16;
    //USING Bitwise OR
    if((num | 1)>num){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    }