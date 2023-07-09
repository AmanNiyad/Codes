#include <stdio.h>

int main(){								
	int arr[]={6,4,5,3,2,1};
	int temp,len;
	len=sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<len-1;i++){
		for(int j=0;j<len-i-1;j++){
			if(arr[j]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}

	for(int i=0;i<len;i++){
		printf("%d",arr[i]);
	}
}
