#include<stdio.h>

struct rail
{
    char name[10];
    char time[10];
};

int main()
{
    struct rail r[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name of train: \n");
        scanf("%s",r[i].name);
        printf("Enter the arrival time of train: \n");
        scanf("%s",r[i].time);
    }
    //Printing trian name with time
    for(i=0;i<5;i++)
    {
        printf("%s\t%s\n",r[i].name,r[i].time);
    }
    return 0;
}