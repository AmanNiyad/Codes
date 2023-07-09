#include<stdio.h>
void fibonaccinthno(int n){
    int a,b,c,i;
    a=0,b=1;
    for(i=1;i<=(n-2);i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
}
int main(){
    int no;
    printf("Enter the n of the desired nth term of the fibonacci series:\n");
    scanf("%d",&no);  
    printf("The %dth number of the fibonacci series (which starts from 0) is ",no);
    fibonaccinthno(no);
    return 0;
}