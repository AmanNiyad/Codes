#include <stdio.h>
#include <stdlib.h>

struct tree{
    int data;
    struct tree *RC,*LC;
};

void buildtree(struct tree *ptr);
void inorder(struct tree *ptr);
void preorder(struct tree *ptr);
void postorder(struct tree *ptr);

int main(){
    struct tree *root;
    root=(struct tree *)malloc(sizeof(struct tree));
    buildtree(root);
    printf("Inorder traversal:\n");
    inorder(root);
    printf("\nPreorder traversal:\n");
    preorder(root);
    printf("\nPostorder traversal:\n");
    postorder(root);
}

void buildtree(struct tree *ptr){
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