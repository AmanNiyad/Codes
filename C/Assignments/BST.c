#include <stdio.h>
#include <stdlib.h>

struct tree{
    int data;
    struct tree *RC,*LC;
};

struct tree* buildtree(struct tree *ptr,int item);
void inorder(struct tree *ptr);
void preorder(struct tree *ptr);
void postorder(struct tree *ptr);

int main(){
    struct tree *root;
    int ch;
    int item;
    root=(struct tree *)malloc(sizeof(struct tree));
    printf("Enter the value: ");
    scanf("%d",&root->data);

    printf("Add another node?(1/0)");
    scanf("%d",&ch);

    while(ch==1){
        printf("Enter the value: ");
        scanf("%d",&item);
        buildtree(root,item);
        printf("Add another node?(1/0)");
        scanf("%d",&ch);
    }


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

struct tree* buildtree(struct tree *ptr,int item){
    if(ptr==NULL){
        return newnode(item);
    }

    if(item<ptr->data){
        ptr->LC=buildtree(ptr->LC,item);
    }

    else if(item>ptr->data){
        ptr->RC=buildtree(ptr->RC,item);
    }
    return(ptr);

}

void inorder(struct tree *ptr){
    if(ptr==NULL){
        return;
    }

    inorder(ptr->LC);
    printf("%d ",ptr->data);
    inorder(ptr->RC);
}

void preorder(struct tree *ptr){
    if(ptr==NULL){
        return;
    }
    
    printf("%d ",ptr->data);
    preorder(ptr->LC);
    preorder(ptr->RC);
}

void postorder(struct tree *ptr){
    if(ptr==NULL){
        return;
    }
      
    postorder(ptr->LC);
    postorder(ptr->RC);
    printf("%d ",ptr->data);
}