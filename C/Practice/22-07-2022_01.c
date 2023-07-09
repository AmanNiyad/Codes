/*without using Modulus operator, find even and odd numbers
Multiplication division    and  or  xor  shift operators*/
#include <stdio.h>
int main(){
    int num=11;
    //USING Bitwise AND
    if(num & 1==1){
        printf("The number is odd");
    }
    else{
        printf("The number is even");
    }
}