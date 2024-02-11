#include<stdio.h>  
      
int main(){  
    int i, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];  
    float avg_wt, avg_tat;  
    y = 3;
      
    for(i=0; i<3; i++){  
        printf("Arrival time of Process %d: ",i+1);
        scanf("%d", &at[i]);
        printf("Burst time of Process %d: ",i+1);
        scanf("%d", &bt[i]);  
        temp[i] = bt[i];
    }  
    printf("Enter the Time Quantum for the process: ");  
    scanf("%d", &quant);  
    for(sum=0, i = 0; y!=0; ){  
        if(temp[i] <= quant && temp[i] > 0){
            sum = sum + temp[i];  
            temp[i] = 0;  
            count=1;  
        }     
        else if(temp[i] > 0){  
            temp[i] = temp[i] - quant;  
            sum = sum + quant;    
        }  
        if(temp[i]==0 && count==1)  {  
            y--;
            wt = wt+sum-at[i]-bt[i];  
            tat = tat+sum-at[i];  
            count =0;     
        }  
        if(i==2){  
            i=0;  
        }  
        else if(at[i+1]<=sum){  
            i++;  
        }  
        else{  
            i=0;
        }  
    }  
    printf("Total time: %d", sum);
    float(wt_avg) = wt*1.0/ 3;
    float(tat_avg) = tat*1.0/ 3;
    printf("\n Average Turn Around Time: \t%f", wt_avg);  
    printf("\n Average Waiting Time: \t%f", tat_avg);  
}  
