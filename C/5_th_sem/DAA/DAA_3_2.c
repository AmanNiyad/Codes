#include <stdio.h>
#include <stdlib.h>

int insertion_sort(int arr_38[],int size_38){
    int j,key;

    for(int i=1;i<size_38;i++){
        key=arr_38[i];
        j=i-1;
        while(j>=0 && arr_38[j]>key){
           arr_38[j+1]=arr_38[j];
           j=j-1;
        }
        arr_38[j+1]=key;
    }    

    FILE *fp_out;
    fp_out = fopen("output.dat","w");

    for(int i=0;i<size_38;i++){
        fprintf(fp_out,"\n%d",arr_38[i]);
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
