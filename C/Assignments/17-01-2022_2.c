#include<stdio.h>
void backap(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    backap(n-2);
}
int main(){
    int x;
    printf("Enter the first term of the series:\n");
    scanf("%d",&x);
    printf("The series is:\n");
    backap(x);
    return 0;
} 