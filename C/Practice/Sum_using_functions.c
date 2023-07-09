#include <stdio.h>
int average(float a,float b,float c){
    float result;
    result=a+b+c/3;
    return result;
}
int main(){
    float num_1,num_2,num_3,sum;
    printf("Enter the numbers\n");
    scanf("%d %d",&num_1,&num_2);
    sum=average(num_1,num_2,num_3);
    printf("The sum of the numbers is: %d",sum);
    return 0;
}

