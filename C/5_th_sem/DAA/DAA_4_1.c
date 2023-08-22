#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    i = 0;
  
    j = 0;
  
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
  
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


int main(){
    int opt;
    printf("MAIN MENU\n1. Ascending Data\n2.Descending Data\n3.Random Data\n4.ERROR(Exit)");
    scanf("%d",&opt);
    FILE* fp;
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
    insertion_sort(arr_38,count);
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
        printf("TEST %d\n",count);
        fclose(fp);
        int arr_38[count];
        fp=fopen("inDesc_438.dat","r");
        for(int i=0;i<count;i++){
            fscanf(fp,"%d",&arr_38[i]);
        }
    insertion_sort(arr_38,count);
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
        printf("TEST %d\n",count);
        fclose(fp);
        int arr_38[count];
        fp=fopen("inRand_438.dat","r");
        for(int i=0;i<count;i++){
            fscanf(fp,"%d",&arr_38[i]);
        }
    insertion_sort(arr_38,count);
    }
}    
