#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item{
    int itemId;
    float itemProfit;
    float itemWeight;
    float profitWeightRatio;
};

void swap(float *a, float *b){
    float temp = *a;
    *a=*b;
    *b=temp;
}

void heapify(float arr[], int n, int i){
    int smallest = i;
    int l = 2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]<arr[smallest]){
        smallest = l;
    }
    if(r<n && arr[r]<arr[smallest]){
        smallest = r;
    }
    if(smallest!=i){
        swap(&arr[i], &arr[smallest]);
        heapify(arr,n,smallest);
    }
}    


void buildHeap(float arr[],int N){
    int start = (N/2) - 1;
    for(int i = start; i>=0; i--){
        heapify(arr,N,i);
    }

    for(int i = N-1;i>=0;i--){
        swap(&arr[0],&arr[1]);
        heapify(arr,i,0);
    }    
}

void printHeap(float arr[], int n){
    for(int i =0;i<n;++i){
        printf("%f ",arr[i]);
    }    
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    char name[50];
    float x[n];
    struct Item* arr_438 = malloc(n * sizeof(struct Item));
    
    for(int i = 0 ; i < n ; i++){
        scanf("%d %f %f",&arr_438[i].itemId ,&arr_438[i].itemProfit, &arr_438[i].itemWeight);
    }

    float pw[n];
    
    for(int i = 0 ; i < n ; i++){
        arr_438[i].profitWeightRatio = arr_438[i].itemProfit/arr_438[i].itemWeight;
        pw[i] = arr_438[i].profitWeightRatio;
    } 
    printf("\nProfit to weight ratio before sorting:\n");
    printHeap(pw,n);

    buildHeap(pw, n);
    float pw_1[n];
    for(int i = n-1;i>=0;i--){
        pw_1[n-i-1] = pw[i];
    } 
    printf("\nProfit to weight ratio after sorting:\n");
    printHeap(pw_1, n);

    
    for(int i = 1;i<n+1;i++){
        x[i] = 0;
    }
    
    float cap, maxcap;
    printf("\nEnter capacity of knapsack: ");
    scanf("\n%f",&maxcap);

    cap = 0;

    for(int i = 0;i<n;i++){
        float current = pw_1[i];
        int j = 0;
        while(current != arr_438[j].profitWeightRatio){
            j++;
        }
        if(arr_438[j].itemWeight + cap <= maxcap){
            x[j] = 1;
            cap += arr_438[j].itemWeight;
        }
        else{
            x[j] = (maxcap-cap)/arr_438[j].itemWeight;
            cap = maxcap;
            break;
        
        }
    }

    for(int i = 1;i<n+1;i++){
        printf("Itemno: %d\nAmount to be taken: %f\n",i,x[i-1]);
    }    
}
