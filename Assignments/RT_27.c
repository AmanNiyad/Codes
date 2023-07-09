#include<stdio.h>
int main(){
    int temp;
    int arr[]={7,6,5,4,3,2,1};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
}
