#include<stdio.h>
int main()
{
    int i,j;
    int a[100];
    int n=0;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter %d elements \n",n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }

    printf("The entered elements are : \n");
    for(j=0;j<n;j++)
    {
        printf("%d \t",a[j]);
    }
    return 0;
}
