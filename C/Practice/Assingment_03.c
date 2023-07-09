#include <stdio.h>
#include <math.h>

int main(){
    int B1,B2,B3,B4,a,b,c,d;

    printf("Enter value of each byte block\n");
    scanf("%d",&B1);
    scanf("%d",&B2);
    scanf("%d",&B3);
    scanf("%d",&B4);
    
    a = B1<<24;
    b = B2<<16;
    c = B3<<8;
    d = B4;

    int num=a|b|c|d;
    printf("test %d",num);
}
