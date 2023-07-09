#include<stdio.h>

struct name_city
{
    char name[20];
    int age;
    char city[20];
};

int main(){
    struct name_city n[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name of person \n");
        scanf("%s",n[i].name);
        printf("Enter the age of person \n");
        scanf("%d",&n[i].age);
        printf("Enter the city of person \n");
        scanf("%s",n[i].city);  
    }
    int maxage=0;
    int iter=0;
    for(i=0;i<5;i++)
    {
        if(maxage>n[i].age)
        {
            continue; 
        }
        else{
            maxage=n[i].age;
            iter=i;
        }
    }
    printf("The details for max age are:\n");
    printf("%s\t%d\t%s\n",n[iter].name,n[iter].age,n[iter].city);

    return 0;
}