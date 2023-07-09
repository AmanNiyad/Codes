#include <stdio.h>

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10}, arr2[10];
    int i;
    /* Copy elements of first array into second array.*/ 
    for(i=0; i<10; i++)
    {
        arr2[i] = arr1[i];
    }

    /* Prints the elements of first array   */
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<10; i++)
    {
        printf("% 5d", arr1[i]);
    }

    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<10; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");
}