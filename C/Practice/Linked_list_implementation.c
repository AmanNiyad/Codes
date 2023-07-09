#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int add_node(struct Node *new,struct Node *ptr);
int disp(struct Node *ptr);
int len(struct Node *new,struct Node *ptr);
int search(struct Node *new,struct Node *ptr);

int main(){
    struct Node *head;
    struct Node *new;
    struct Node *ptr;
    head=NULL;
    char cha;

    new=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value: \n");
    scanf("%d",&new->data);

    new->next=NULL;
    head=new;
    ptr=head;
    printf("Do you want to add antoher node?(Y/N)");
    scanf(" %c",&cha);
    
    while (cha=='y'){
        add_node(new,ptr);

        printf("Do you want to add antoher node?(Y/N)");
        scanf(" %c",&cha);
    }
    head=new;
    ptr=head;
    disp(ptr);
    len(new,ptr);

}

int add_node(struct Node *new,struct Node *ptr){
    new=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value: \n");
    scanf("%d",&new->data);

    new->next=NULL;
    ptr->next=new;
    ptr=new;
}

int disp(struct Node *ptr){

    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}

int len(struct Node *new,struct Node *ptr){
    int ctr;
    while(ptr!=NULL){
        ctr++;
        ptr=ptr->next;
    }
    printf("Length is: %d",ctr);
}

int search(struct Node *new,struct Node *ptr){
    int ser,flag;
    printf("Enter key: \n");
    scanf("%d",&ser);

    while(ptr!=NULL){
        if(ptr->data==ser){
            flag=1;
        }
        else{
            flag=0;
        }
        ptr=ptr->next;
    }
    if(flag==1){
        printf("The element is present.");
    }
    else{
        printf("the element is not present");
    }
}