/*Create an array, dynamically, insert element using pointer,display and search using pointer.*/

#include <stdio.h>
#include <stdlib.h>

void display(int n,int *ptr);
void search(int n,int *ptr,int ser);

int main(){
    int n;
    int *ptr;


    printf("Enter the number of elements: ");
    scanf("%d",&n);

    ptr =(int *)malloc(n*sizeof(int));

    printf("Enter elements in the List \n");
    for (int i = 0; i < n; i++){
      scanf("%d",ptr+i);
    }

    display(n,ptr);



    printf("\nEnter number to be searched: \n");
    int ser;
    scanf("%d",&ser);

    search(n,ptr,ser);
    
}

void display(int n,int *ptr){
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
}

void search(int n,int *ptr,int ser){
    for(int i=0;i<n;i++){
        if(*(ptr+i)==ser){
            printf("The number is present in the list.");
            break;
        }
        else{
            continue;
        }
    }
}