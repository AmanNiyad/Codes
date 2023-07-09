#include<stdio.h> 
void numbers(int);
int main(){
    int n=10;
    printf("\nNumbers from 1 To 10 are: ");
    numbers(n);
    return 0;
}
void numbers(int N){
    if(N){
        numbers(N-1);
    }
    else{
        return;
    }
    printf("%d ", N);
}