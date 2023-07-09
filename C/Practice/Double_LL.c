#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
}*head=NULL,*tail;

void create_ll(struct node * ptr,struct node * ptr_2);
void display(struct node * ptr,struct node * ptr_2);


int main(){
    struct node *head=NULL,*ptr,*new,*ptr_2;
    new=(struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf(" %d",&new->data);

    head=new;
    new->prev=NULL;
    new->next=NULL;
    ptr=head;
    

    create_ll(ptr,ptr_2);
    ptr=head;
    ptr_2=tail;

    display(ptr,ptr_2);
}

void create_ll(struct node * ptr,struct node * ptr_2){
    struct node *new;
    char ch;
    printf("Enter more node?(Y/N)");
    scanf(" %c",&ch);

    while(ch=='y'){
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf(" %d",&new->data);
        new->next=NULL;
        ptr->next=new;
        new->prev=ptr;
        ptr=new;
        printf("Enter more nodes(Y/N)");
        scanf(" %c",&ch);   
    }
    tail=new;

}

void display(struct node * ptr,struct node *ptr_2){
    
    printf("The linked list is: \n");
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\nThe linked list in reversed order is: \n");
    while(ptr_2!=NULL){
        printf("%d\t",ptr_2->data);
        ptr_2=ptr_2->prev;
    }
}



