#include <stdio.h>

int binary_search(int arr[], int size, int ser, int *comparision){
    int left_38=0;
    int right_38=size-1;
    int pos_38=-1;

    while(left_38<=right_38){
        int mid_38=left_38+(right_38-left_38)/2;
        (*comparision)++;

        if(arr[mid_38]==ser){
            pos_38=mid_38;
            right_38=mid_38-1;
        }

        else if(arr[mid_38]<ser){
            left_38=mid_38+1;
        }

        else{
            right_38=mid_38-1;
        }
    }    
    return pos_38;
}    
    


int main(){
    int arr_38[]={6,2,84,23,86,34,2};
    int size_38=sizeof(arr_38)/sizeof(arr_38[0]);

    int ser_38=6;

    int comparision1_38=0;

    int position_38=binary_search(arr_38,size_38,ser_38,&comparision1_38);

    if(position_38==-1){
        printf("Element %d  not found", ser_38);
    }
    else{
        printf("%d found at index %d\n",ser_38,position_38);
    }
    printf("Number of comparisions: %d\n",comparision1_38);




    ser_38=2;

    int comparision2_38=0;

    position_38=binary_search(arr_38,size_38,ser_38,&comparision2_38);

    if(position_38==-1){
        printf("Element %d  not found", ser_38);
    }
    else{
        printf("%d found at index %d\n",ser_38,position_38);
    }
    printf("Number of comparisions: %d\n",comparision2_38);




    ser_38=10;

    int comparision3_38=0;

    position_38=binary_search(arr_38,size_38,ser_38,&comparision3_38);

    if(position_38==-1){
        printf("Element %d  not found", ser_38);
    }
    else{
        printf("%d found at index %d\n",ser_38,position_38);
    }
    printf("Number of comparisions: %d\n",comparision3_38);


}
