
#include<stdio.h>
void copyarraydata(int *a,int n){
    printf("The entered array is:\n");
    int i,j,k;
    int *b=a;
    for(i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
    for(j=0;j<n;j++){
        *(b+j)=*(a+j);
    }
    printf("\n\nThe new array into which data of first array was copied is:\n");
    for(k=0;k<n;k++){
        printf("%d ",*(b+k));
    }
}
int main(){
    int x,p[x],q;
    printf("Enter the number of elements of the array:\n");
    scanf("%d",&x);

    printf("Enter the elements of the array:\n");
    for(q=0;q<x;q++){
        scanf("%d",&p[q]);
    }
    copyarraydata(&p[0],x);
    return 0;
}