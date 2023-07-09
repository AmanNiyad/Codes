#include<stdio.h>
void displayarraymaxelement(int *b,int n){
    printf("The entered 1D array is ");
    int i,max=-1,j;
    for(i=0;i<n;i++){
        printf("%d ",*(b+i));
    }
    for(j=0;j<n;j++){
        if (*(b+j)>max){
            max=*(b+j);
        }
    }
    printf("\n\nThe maximum element present inside the entered array is %d",max);
}
int main(){
    int x,a[x],k;
    printf("Enter the number of elements of the 1D array:\n");
    scanf("%d",&x);
    printf("Enter the elements of the 1D array:\n");
    for(k=0;k<x;k++){
        scanf("%d",&a[k]);
    }
    displayarraymaxelement(&a[0],x);
    return 0;
}