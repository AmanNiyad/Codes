#include <stdio.h>
int main(){ 
    int i,b[4],c[4],a[8]={1,2,3,4,5,6,7,8},d[8];
    for(i=0;i<4;i++){
        b[i]=a[i];
    }
    for(i=7;i>3;i--){
        c[7-i]=a[i];
    }
    for(i=0;i<8;i++){
        if(i<4){
            d[i]=c[i];
        }
        else{
            d[i]=b[i-4];
        }
    }
    printf("The original array is:\n");
    for(i=0;i<8;i++){
        printf("%d ",a[i]);
    }
    printf("\nThe new array is:\n");
    for(i=0;i<8;i++){
        printf("%d ",d[i]);
    }
    return 0;
}