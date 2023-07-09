/*
wap to take your name as character wise where each char should be one node of the linked list

call funct insert end
take the length of the name

implement the following fun on this:
1.return the number of vovels
2. return the number of words
    no of space + 1

3.display the odd pos char only
*/
//incomplete

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    char info[10];
    struct node *next;
}*head=NULL;

void trav(struct node *ptr){
    while(ptr!=NULL){
        printf("%s",ptr->info);
        ptr=ptr->next;
    }
}

void insert_end(){
    struct node *temp,*ptr=head;
    char ch[10];
    char s[10];
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the char: ");
    // scanf(" %s",(temp->info));
    // gets((temp->info));
    //scanf(" %[^\n]%*c",(temp->info));
    scanf(" %[^\n]%*c",ch);
    // fgets((temp->next),10,stdin);
    // temp->info=s;

    for(int i=0;i<strlen(ch);i++){
        ch[i]=temp->info;
    }
    
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
            
        }
        ptr->next=temp;
    }
}

int main(){
    int len;
    printf("Enter the length of name with space: ");
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        insert_end();
        trav(head);
    }
    return 0;
}