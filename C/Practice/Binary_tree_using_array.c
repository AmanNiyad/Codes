#include <stdio.h>

int main(){
    int level;
    printf("Enter number of levels in the tree: ");
    scanf("%d",&level);

    int nodes;
    nodes=(2^(level+1))-1;
    int tree[nodes];

    int root,val,index=0;

    int i=0,j=0;
    printf("Enter the root node: ");
    scanf("%d",&root);
    tree[index]=root;
    j++;

    int ch,ch1;

    while(j!=nodes){
        printf("Enter choice:\n1.Enter left child.\n2.Enter right child.\n3.Skip to next level");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value:");
            scanf("%d",&val);
            index=2*index+1;
            tree[index]==val;
            break;

        case 2:
            printf("Enter the value:");
            scanf("%d",&val);
            index=2*index+2;
            tree[index]==val;
            break;

        case 3:
            printf("1.Add to left child.\n2.Add to right child.\n3.End the tree.");
            scanf("%d",&ch1);

            switch (ch1)
            {
            case 1:
                index=2*index+1;
                break;
            case 2:
                index=2*index+2;
                break;
            
            default:
                break;
            }

        
        default:
            break;
        }
    }
}