# include <stdio.h>
int main(){
    int len;

    printf("Enter the desired length of the list ");
    scanf("%d",&len);

    int list[len];
    printf("Enter %d values ",len);
    for(int i=0;i<len;i++){
        scanf("%d",&list[i]);
    }
    printf("Original list:\n");
    for(int i=0;i<len;i++){
        printf("%d",list[i]);
    }
    printf("\nTEST%d",list[-1]);
    int temp,i=0;

    while(1){
        temp=list[i];
        list[i]=list[len-i];
        list[len-i]=temp;
        i++;
        if(i==len){
            break;
        }
        else{
            continue;
        }
    }
    printf("\nNew list:\n");
    for(i=0;i<len;i++){
        printf("%d",list[i]);
    }
}
