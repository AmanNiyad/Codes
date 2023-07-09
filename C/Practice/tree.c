#include<stdio.h>

void buildtree(int tree[], int index, int item){
    int ch;
    int data;
    tree[index]=item;
    printf("Enter left child of %d(1/0):", item);
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter the left child");
        scanf("%d",&data);
        buildtree(tree, 2*index+1,data);
    }

    printf("Enter right child of %d(1/0):", item);
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter the right child");
        scanf("%d",&data);
        buildtree(tree, 2*index+1,data);
    }
}
int main(){
    int tree[20];
    int item;
    for(int i=0; i<20;i++){
        tree[i]=-1;

    }
    printf("Enter root node: ");
    scanf("%d",&item);
    buildtree(tree,0,item);
    printf("Tree= ");
    for(int i=0;i<20;i++){
        if(tree[i]==-1){
            printf("-");
        }
        else{
            printf("%d",tree[i]);
        }
    }
}