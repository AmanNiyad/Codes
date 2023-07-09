#include <stdio.h>
int main(){
    int n;
    printf("Enter value of n   ");
    scanf("%d",&n);

    L1:
    if(n>=0){
        printf("%d ",n);
        n=n-2;
    }
    goto L1;
}