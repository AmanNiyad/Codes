#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*head=NULL;

void create(struct Node *ptr);
void display(struct Node *ptr);
void delete(int num);

int main(){
    struct Node *ptr,*new;
    new=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value");
    scanf("%d",&new->data);
    new->next=NULL;
    new->prev=NULL;
    ptr=new;
    head=new;

    int ch;
    printf("Enter anpther node?(0/1)");
    scanf("%d",&ch);
    while(ch==1){
        create(ptr);
        printf("Enter anpther node?(0/1)");
        scanf("%d",&ch);
    }
    display(head);
    int num;
    printf("Enter node to delete first of the consecutive nodes");
    scanf("%d",&num);
    delete(num);
    display(head);
}

void create(struct Node *ptr){
    struct Node *new;
    new=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value");
    scanf("%d",&new->data);
    new->next=NULL;
    ptr->next=new;
    new->prev=ptr;
}

void display(struct Node *ptr){
    printf("LL in original order: \n");
    while(ptr->next!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next; 
    }
    printf("LL in reversed order: \n");
    while(ptr->prev!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->prev;
    }
}

void delete(int num){
    struct Node *ptr;
    ptr=head;
    int count=1;
    while(ptr->next!=NULL && count!=num-1){
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next->next;
    ptr->next->next->next->prev=ptr;
}