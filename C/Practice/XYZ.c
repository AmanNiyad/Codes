#include <stdio.h>
struct book
{
    char book_name[5][20];
    char author[5][20];
    int price[5];
    char publication [5][20];
};
#include <stdio.h>    
    int main() {
        struct book b;
        struct book *p;
        p=&b;  
        printf("enter data");
        for(int i=0;i<5;i++)
        {  
            scanf("%s\n",b.book_name[i]);
            scanf("%s\n",b.author[i]);
            scanf("%d\n",&b.price[i]);
            scanf("%s\n",b.publication[i]);
        }
        printf("you have entered....\n");
        for(int j=0;j<5;j++)
        {
            printf("%s       %s      %d        %s\n",p->book_name[j],p->author[j],p->price[j],p->publication[j]);
        }
        for(int i=0;i<5;i++)
        {
            if(b.price[i]>200)
            {
                printf("\nBook Name: %s",b.book_name[i]);
                printf("\nAuthor Name: %s",b.author[i]);
                printf("\nPubllication: %s",b.publication[i]);
                printf("\nPrice: %d",b.price[i]);
            }
            printf("\n");
        }
    
    return 0;
}