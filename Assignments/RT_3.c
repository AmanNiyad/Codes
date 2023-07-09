#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int sum;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    printf("%d",sum);
}