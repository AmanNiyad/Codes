#include <stdio.h>

int main()
{
    int num=15;
    //using shift operator
    if(((num>>1)<<1)==num){
    printf("Even");
    }
    else if(((num>>1)<<1)!=num){
    printf("Odd");
    }
}
