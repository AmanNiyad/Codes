#include <stdio.h>

int main(){
    int num;
    printf("Enter number of elements to add in the array: \n");
    scanf("%d",&num);

    int arr[num];

    for(int i=0;i<num;i++){
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }

    int len;
    len=sizeof(arr)/sizeof(arr[0]);

    int largest=0;
    int smallest=arr[0];

    for(int i=0;i<num;i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
        else if(arr[i]<=smallest){
            smallest=arr[i];
        }
    }

    printf("The largest number is: %d\n",largest);
    printf("The smallest number is: %d",smallest);
}