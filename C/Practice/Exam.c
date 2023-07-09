#include<stdio.h>
int main()
{
    int arr[5];
    int bool;
    bool=0;
    int n;
    int index;
    index=0;
    int temp=0;
    int count=0;
    printf("Enter 5 integers \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("Enter the integer u want to search in the array \n");
    scanf("%d",&n);


    for(int j=0;j<5;j++)
    {
        if(arr[j]==n)
        {
            count=count+1;
            bool=1;
            temp=1;
            index=j;
            break;
        }
    }

    if(bool==1 && temp==1)
    {
        printf("The searched integer is present in the array \n");
        printf("The array inex of the searched element is %d ",index);
        printf("The search element is present %d number of times \n",count);
    }
    else
    {
        printf("The searched integer is not present in the array \n");
    }
    
    return 0;
}