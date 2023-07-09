#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL;

void create_ll(struct node *ptr);
void display(struct node *ptr);

int main(){
    struct node *new,*ptr;

    new=(struct node *)malloc(sizeof(struct node));
    
    head=new;
    printf("Enter the value: ");
    scanf("%d",&new->data);
    new->next=NULL;
    ptr=head;
    ptr=new;

    create_ll(ptr);
    display(ptr);
}

void create_ll(struct node *ptr){
    char choice;
    struct node *new;
    printf("Create new node?(Y/N)");
    scanf(" %c",&choice);
    while(choice=='y'){
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the value: ");
        scanf("%d",&new->data);
        new->next=head;
        ptr->next=new;
        ptr=new;
        printf("Create new node(Y/N)");
        scanf(" %c",&choice);
    }
}

void display(struct node *ptr){
    head=head->next;
    while(ptr->next!=head){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}