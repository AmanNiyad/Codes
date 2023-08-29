#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    int id;
    char name[50];
    int age;
    int height;
    int weight;
};

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest]){
        largest = 1;
    }
    if(r<n && arr[r]>arr[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(&arr[i], &arr[largest]);
        heapify(arr,n,largest);
    }
}    


void buildHeap(int arr[],int N){
    int start = (N/2) - 1;
    for(int i = start; i>=0; i--){
        heapify(arr,N,i);
    }
}

void printHeap(int arr[], int n){
    for(int i =0;i<n;++i){
        printf("%d ",arr[i]);
    }    
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    char name[50];
    struct person* arr_438 = malloc(n * sizeof(struct person));
    FILE *fp_438;
    
    for(int i = 0 ; i < n ; i++){
        scanf("%d %s %d %d %d",&arr_438[i].id ,arr_438[i].name, &arr_438[i].age ,&arr_438[i].height ,&arr_438[i].weight);
    }

    int opt;
    int age[n];
    printf("\nENTER OPTION\n1.Create heap based on age\n2.Create heap based on weight");
    scanf("%d",&opt);
    
    if(opt == 1){
        for(int i = 0 ; i < n ; i++){
            age[i] = arr_438[i].age;
        } 
        buildHeap(age, n);
        printHeap(age, n);
    }

    int weight[n];
    printf("\nENTER OPTION\n1.Create heap based on age\n2.Create heap based on weight");
    if(opt == 2){
        for(int i = 0 ; i < n ; i++){
            weight[i] = arr_438[i].weight;
        } 
        buildHeap(weight, n);
        printHeap(weight, n);
    }

}
