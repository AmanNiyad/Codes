#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void display(struct node* ptr);

void create_ll(struct node *ptr, struct node *new);

void insert_first();
void insert_last();
void insert_at_pos();

void del_first();
void del_last();
void del_pos();
void swap();

int main()
{
    //struct node *head;
    struct node *new;
    struct node *ptr;
    //head=NULL;

    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value: \n");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;
    ptr=head;

    create_ll(ptr,new);
    display(ptr);

    int choice_1,choice_2;

    printf("\n1.Insert element.\n2.Delete element.\n3.Exit\nEnter your choice...");
    scanf("%d",&choice_1);

    while(choice_1==1 || choice_1==2){
        if(choice_1==1)
        {
            printf("\n1.Insert at first\n2.Insert at last\n3.Insert at a specified position\nEnter choice: ");
            scanf("%d",&choice_2);

            if(choice_2==1)
            {
                insert_first();
            }
            else if(choice_2==2)
            {
                insert_last();
            }
            else if(choice_2==3)
            {
                insert_at_pos();
            }
        }
        else if(choice_1==2)
        {
            printf("\n1.Delete first\n2.Delete last\n3.Delete a specified position\nEnter choice: ");
            scanf("%d",&choice_2);

            if(choice_2==1)
            {
                del_first();
            }
            else if(choice_2==2)
            {
                del_last();
            }
            else if(choice_2==3)
            {
                del_pos();
            }
        }
    
    printf("\n1.Insert element.\n2.Delete element.\n3.Exit\nEnter your choice...");
    scanf("%d",&choice_1);
    }

    display(ptr);
    swap();
    display(ptr);
    return 0;
}

void insert_first()
{
    struct node *new,*ptr;

    new=(struct node *) malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&new->data);

    new->next=head;
    head=new;
    ptr=head;

    display(ptr);
}

void insert_last()
{
    struct node *new, *ptr;

    new=(struct node *) malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&new->data);

    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;

    }
    ptr->next=new;
    new->next=NULL;
    ptr=head;

    display(ptr);
}

void insert_at_pos()
{
    int pos;

    printf("Enter the position to add the new node: ");
    scanf("%d",&pos);

    struct node *new, *ptr;

    new=(struct node *) malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&new->data);

    int count=1;
    ptr=head;
    while(ptr!=NULL && count!=pos-1){
        ptr=ptr->next;
        count++;
    }
    new->next=ptr->next;
    ptr->next=new;
    ptr=head;

    display(ptr);
}

void display(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\t", ptr->data);
        ptr=ptr->next;
    }
}

void create_ll(struct node *ptr, struct node *new)
{
    char ch;
    printf("Do you want to add (y,n) \n");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the new value: \n");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=new;
        printf("Do you want to add more values? (y,n) \n");
        scanf(" %c",&ch);
    }
}

void del_first()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL){
            printf("Not possible.");
    }
    head=head->next;

    free(ptr);
    ptr=head;
    display(ptr);
}

void del_last()
{
    if(head==NULL)
    {
            printf("Not possible.");
    }
    struct node *temp,*ptr;
    ptr=head;
    while((ptr->next)->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp=ptr->next;
    ptr->next=NULL;
    free(temp);
    ptr=head;
    display(ptr);
}

void del_pos()
{
    int pos;
    int count=1;

    printf("Enter positon");
    scanf("%d",&pos);

    struct node *ptr,*temp;

    ptr=head;
    while(ptr!=NULL && count!=pos-1){
        ptr=ptr->next;
        count++;
    }
    temp=ptr->next;
    ptr->next=temp->next;
    free(temp);

    ptr=head;
    display(ptr);
}

void swap(){
    struct node *ptr,*ptr_1,*ptr_2,*temp_1,*temp_2;

    //2 5
    ptr=head;

    int count;
    while(ptr!=NULL){
        if(count==1){
            ptr_1==ptr;
        }
        else if(count==4){
            ptr_2=ptr;
        }
        ptr=ptr->next;
    }

    (ptr_1->next)->next=temp_1;
    ptr_1->next=temp_2;

    (ptr_1->next)->next=ptr_2->next->next;
    temp_2->next=(ptr_2->next)->next;
    (ptr_2->next)->next=temp_1;
    ptr_1->next=ptr_2->next;
    ptr_2->next=temp_2;

    ptr=head;
    
}