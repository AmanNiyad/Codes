#include<stdio.h>
int main(){
    int i=0,j,temp,a[5]={1,2,3,4,5};
    for(i=0;i<=2;i++){
        temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }
    printf("Reversed array is");
    for(i=0;i<=4;i++){
        printf("%d",a[i]);
    }
}

 