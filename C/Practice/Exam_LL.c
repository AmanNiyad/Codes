#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL;


void max_rec(struct node *ptr);


int main(){
    struct node *new,*ptr;
    int ch;

    printf("Do you want to add a node?(1/0)");
    scanf("%d",&ch);
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of the node: ");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;

    ptr=head;
    while(ch==1){
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter data of the node: ");
        scanf("%d",&new->data);
        ptr->next=new;
        new->next=NULL;
        ptr=ptr->next;

        printf("Do you want to add a node?(1/0)");
        scanf("%d",&ch);
    }
    max_rec(head);
}

void max_rec(struct node *ptr){
    int num=0;
    struct node *ptr1=ptr;
    struct node *head=ptr;
    int i=0;
    while(ptr!=NULL){
        num=0;

        while(ptr1!=NULL){
            if(ptr1->data==ptr->data){
                num++;
            }
            ptr1=ptr1->next;
        }
        printf("Maximum occurance of %d is %d times\n",ptr->data,num);
        ptr=ptr->next;
        ptr1=head;
        i++;

    }
    




}