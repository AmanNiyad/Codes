//Add a new node in last place without using a third pointer.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;


void insert_last()
{
    printf("Insert at last:\n");
    struct node *new;
    int value;

    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&value);
    new->data=value;
    new->prev=head->prev;
    (head->prev)->next=new;
    head->prev=new;
    new->next=head;
}


int main()
{
    struct node *ptr,*new;
    new=(struct node *)malloc(sizeof(struct node));
    head=new;
    printf("Enter the value: ");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=NULL;
    ptr=new;

    char ch;
    printf("Do you want to add (y,n) \n");
    scanf(" %c",&ch);
    while(ch=='y'){
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the new value: \n");
        scanf("%d",&new->data);
        new->next=NULL;
        new->prev=ptr;
        ptr->next=new;
        new->next=head;
        head->prev=new;
        ptr=new;

        printf("Do you want to add more values? (y,n) \n");
        scanf(" %c",&ch);
    }

    ptr=head;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);

    insert_last();


    ptr=head;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);


    printf("\nReverse Printing\n");

    ptr=head;
    do
    {
        ptr=ptr->next;
    }while(ptr->next!=head);

    while(ptr!=head){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
    printf("%d",head->data);
    
    
    
}
   