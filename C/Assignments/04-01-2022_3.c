#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i;
    int *p=&arr[i];
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<10;i++){
        if(i==0){
            printf("First element: %d\n",*p);
        }
        else if(i==len/2){
            int *q=&arr[i];
            printf("First element of the second half: %d",*q);
        }
        else{
            continue;
        }
    }
    return 0;
}