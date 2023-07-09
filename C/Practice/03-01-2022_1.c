#include <stdio.h>
int main(){
     int a=5;
     printf("%d,a");
     printf("%p",&a);
     int *b=&a;
     printf("%p",b);
     printf("%p",&b);

     printf("%d",*b);
}