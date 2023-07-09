#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *RC,*LC;
};

struct tree *stack[100];
int top=0;


void buildtree(struct tree *ptr);
void inorder(struct tree *ptr);
void preorder(struct tree *ptr);
void postorder(struct tree *ptr);
struct tree* newnode(int value);


int main()
{
    // struct tree *root;
    //root=(struct tree *)malloc(sizeof(struct tree));
    //buildtree(root);

    struct tree *root = newnode(10);
    root->LC = newnode(20);
    root->LC->LC = newnode(40);
    root->LC->RC = newnode(50);
    root->LC->RC->LC=newnode(60);
    root->LC->RC->RC=newnode(70);
    root->RC=newnode(30);
    root->RC->RC=newnode(80);
    root->RC->RC->LC=newnode(90);
  
    printf("Inorder traversal:\n");
    inorder(root);
    printf("\nPreorder traversal:\n");
    preorder(root);
    printf("\nPostorder traversal:\n");
    postorder(root);

}


struct tree* newnode(int value)
{
    struct tree* new = (struct tree*)malloc(sizeof(struct tree));
    new->data = value;
    new->LC = NULL;
    new->RC = NULL;
    return(new);
}

/*void buildtree(struct tree *ptr){
    int ch;
    struct tree *new;

    printf("Enter the value: ");
    scanf("%d",&ptr->data);
    ptr->LC=NULL;
    ptr->RC=NULL;

    printf("Do you want to add left child of %d(1/0)?",ptr->data);
    scanf("%d",&ch);

    if(ch==1){
        new=(struct tree*)malloc(sizeof(struct tree));
        ptr->LC=new;
        buildtree(new);
    }
    printf("Do you want to add right child of %d(1/0)",ptr->data);
    scanf("%d",&ch);

    if(ch==1){
        new=(struct tree*)malloc(sizeof(struct tree));
        ptr->RC=new;
        buildtree(new);
    }
}
*/


void push(struct tree *ptr)
{
    top++;
    stack[top]=ptr;
}

struct tree* pop(struct tree *ptr)
{
    ptr=stack[top];
    top--;
    //printf("%d ",ptr->data);
    return(ptr);
}

void inorder(struct tree *ptr)
{
    stack[top]=NULL;
    while(ptr!=NULL)
    {
        push(ptr);
        ptr=ptr->LC;
    }
    ptr=stack[top];
    top--;
    printf("%d ",ptr->data);
    while(ptr!=NULL)
    {
        if(ptr->RC!=NULL)
        {
            ptr=ptr->RC;
            while(ptr!=NULL)
            {
                push(ptr);
                ptr=ptr->LC;
            }
        }
        if(top!=0)
        {
            ptr=pop(ptr);
        }
        else
        {
            break;
        }
    } 
}

void preorder(struct tree *ptr)
{
    top=0;
    stack[top]=NULL;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        if(ptr->RC!=NULL){
            push(ptr);
        }
        if(ptr->LC!=NULL){
            ptr=ptr->LC;
        }
        else{
            ptr=pop(ptr);
        }
    }

}

void postorder(struct tree *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
      
    postorder(ptr->LC);
    postorder(ptr->RC);
    printf("%d ",ptr->data);
}