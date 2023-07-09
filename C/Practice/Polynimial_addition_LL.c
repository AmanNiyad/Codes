#include <stdio.h>
#include <stdlib.h>

struct node{
    int coef,exp;
    struct node * next;
};

void display(struct node *head);
struct node *create(struct node *head);
struct node *polyadd(struct node *head_1,struct node *head_2);
struct node *insert(struct node *head_3,int ex,int co);

int main(){
    struct node *head_1,*head_2,*head_3;
    printf("Enter the elements of first polynomial: \n");
    head_1=create(head_1);
    printf("The first polynomial is: \n");
    display(head_1);


    printf("Enter the elements of second polynomial: \n");
    head_2=create(head_2);
    printf("The second polynomial is: \n");
    display(head_2);

    head_3=polyadd(head_1,head_2);
    display(head_3);

}

struct node *create(struct node *head){
    struct node *new,*ptr;
    char ch;
    head=NULL;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter coefficient and exponent: ");
    scanf("%d %d",&new->coef,&new->exp);
    new->next=NULL;
    head=new;
    ptr=head;
    printf("Enter more values?(y/n)");
    scanf(" %c",&ch);

    while(ch=='y'){
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter coefficient and exponent: ");
        scanf("%d %d",&new->coef,&new->exp);
        new->next=NULL;
        ptr->next=new;
        ptr=new;

        printf("Enter more values?(y/n)");
        scanf(" %c",&ch);
    }
    return head;
}

void display(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t%d\n",ptr->coef,ptr->exp);
        ptr=ptr->next;  
    }
}

struct node *polyadd(struct node *head_1,struct node *head_2){
    struct node *head_3,*ptr_1,*ptr_2;

    ptr_1=head_1;
    ptr_2=head_2;
    
    while(ptr_1!=NULL||ptr_2!=NULL){
        if(ptr_1->exp==ptr_2->exp){
            head_3=insert(head_3,ptr_1->exp,ptr_1->coef+ptr_2->coef);
        }
        else if(ptr_1->exp>ptr_2->exp){
            head_3=insert(head_3,ptr_1->exp,ptr_1->coef);
        }
        else if(ptr_1->exp<ptr_2->exp){
            head_3=insert(head_3,ptr_2->exp,ptr_2->coef);
        }
    }
    return head_3;
}


struct node *insert(struct node *head_3,int ex,int co){
    struct node *new,*ptr;
    new=(struct node*)malloc(sizeof(struct node));

    new->exp=ex;
    new->coef=co;
    new->next=NULL;

    if(head_3==NULL){
        head_3=new;
    }
    else{
        ptr=head_3;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new;
    return head_3;
}