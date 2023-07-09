#include<stdio.h>
int main(){
   int i,a[5];
   printf("Enter the values");
   for(i=0;i<5;i++){
       
       scanf("%d",&a[i]);
   }
   printf("The array is:\n");
   for(i=0;i<5;i++){
       printf("%d ",a[i]);
   }
   return 0;
}