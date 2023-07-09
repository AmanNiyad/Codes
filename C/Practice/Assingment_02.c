#include <stdio.h>
#include <math.h>


int main(){
    int the_int;
    printf("Enter the number");
    scanf("%d",&the_int);
    
    int a = (the_int >> 24)& 0xff;  
    int b = (the_int >> 16)& 0xff; 
    int c = (the_int >>  8)& 0xff; 
    int d = the_int & 0xff; 

    printf("The content of B1 is %d\n",a);
    printf("The content of B2 is %d\n",b);
    printf("The content of B3 is %d\n",c);
    printf("The content of B4 is %d\n",d);
}
