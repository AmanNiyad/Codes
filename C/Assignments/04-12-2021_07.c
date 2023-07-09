#include <stdio.h>
int main(){ 
    int a[8]={1,2,3,4,5,6,7,8},i,j=0,b[4],c[4],d[8];
    
    for(i=0;i<8;i++){
        if (i%2==0){
            b[j]=a[i];
            j++;
        }
        else{
            c[j]=a[i];
            j++;
        }
    }
    printf("TEST 1");
    for(i=0;i<4;i++){
        printf("%d ",b[i]);
    }
    printf("TEST 2");
    for(i=0;i<4;i++){
        printf("%d ",c[i]);
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