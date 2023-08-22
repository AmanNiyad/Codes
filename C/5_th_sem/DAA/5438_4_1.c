#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr_438[], int l, int mid, int h){
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = h - mid;
 
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++){
        L[i] = arr_438[l + i];
    }    
    for (j = 0; j < n2; j++){
        R[j] = arr_438[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr_438[k] = L[i];
            i++;
        }
        else{
            arr_438[k] = R[j];
            j++;
        }
        k++;
    }
  
    while(i < n1){
        arr_438[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr_438[k] = R[j];
        j++;
        k++;
    }
}
  
void printArr(int arr_438[],int size){
    FILE *fp_out;

    fp_out = fopen("output_438.dat","w");

    for(int i=0;i<size;i++){
        fprintf(fp_out,"%d\n",arr_438[i]);
    }    
}

void mergeSort(int arr_438[], int l, int h, int size){
    if(l < h){
        int mid = (l+h)/2; 
        mergeSort(arr_438, l, mid,size);
        mergeSort(arr_438, mid + 1, h,size);
        merge(arr_438, l, mid, h);
    }
}

int main(){
    int opt,size;
    
    printf("MAIN MENU\n1. Ascending Data\n2.Descending Data\n3.Random Data\n4.ERROR(Exit)");
    scanf("%d",&opt);
    FILE* fp;
    
    //time
    clock_t start,stop;
    double time;
    
    start = clock();

    if(opt==1){
        int count=0;
        fp=fopen("inAsce_438.dat","w");
        for(int i=0;i<500;i++){
            fprintf(fp,"%d\n",i);
        }
        fclose(fp);
        fp=fopen("inAsce_438.dat","r");
        char c=getc(fp);
        for(c=getc(fp);c!=EOF;c=getc(fp)){
            if(c=='\n'){
                count=count+1;
            }    
        }    
        fclose(fp);
        int arr_38[count];
        fp=fopen("inAsce_438.dat","r");
        for(int i=0;i<count;i++){
            fscanf(fp,"%d",&arr_38[i]);
        }
    size=sizeof(arr_38)/sizeof(arr_38[0]);    
    mergeSort(arr_38,0,size,size);
    printArr(arr_38,size);
    }
    

    else if(opt==2){
        int count=0;
        fp=fopen("inDesc_438.dat","w");
        for(int i=500;i>0;i--){
            fprintf(fp,"%d\n",i);
        }
        fclose(fp);
        fp=fopen("inDesc_438.dat","r");
        char c=getc(fp);
        for(c=getc(fp);c!=EOF;c=getc(fp)){
            if(c=='\n'){
                count=count+1;
            }    
        }    
        fclose(fp);
        int arr_38[count];
        fp=fopen("inDesc_438.dat","r");
        for(int i=0;i<count;i++){
            fscanf(fp,"%d",&arr_38[i]);
        }
    size=sizeof(arr_38)/sizeof(arr_38[0]);    
    mergeSort(arr_38,0,size,size);
    printArr(arr_38,size);
    }


    else if(opt==3){
        int count=0;
        fp=fopen("inRand_438.dat","w");
        for(int i=0;i<500;i++){
            fprintf(fp,"%d\n",rand());
        }
        fclose(fp);
        fp=fopen("inRand_438.dat","r");
        char c=getc(fp);
        for(c=getc(fp);c!=EOF;c=getc(fp)){
            if(c=='\n'){
                count=count+1;
            }    
        }    
        fclose(fp);
        int arr_38[count];
        fp=fopen("inRand_438.dat","r");
        for(int i=0;i<count;i++){
            fscanf(fp,"%d",&arr_38[i]);
        }
    size=sizeof(arr_38)/sizeof(arr_38[0]);    
    mergeSort(arr_38,0,size,size);
    printArr(arr_38,size);
    }

    
    stop = clock();
    time=(double)stop - (double)start;
    printf("Time taken = %.f\n",time);

}    
