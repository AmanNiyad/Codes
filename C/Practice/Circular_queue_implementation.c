#include <stdio.h>
int queue[8];
int front=-1,rear=-1;
int size=8;

int enqueue(int queue[8],int front, int rear,int size, int value);
int dequeue(int queue[8],int front, int rear,int size, int value);
void traverse(int queue[8],int front, int rear,int size);

int main(){
    int value;
    char ch='y';
    int ch1;
    int res;

    while(ch=='Y'||ch=='y'){
        printf("Enter choice:\n1.Add\n2.Delete\n");
        scanf("%d",&ch1);
        if(ch1==1){
            printf("Enter value: ");
            scanf("%d",&value);
            enqueue(queue,front, rear, size, value);
        }
        else if(ch1==2){
            dequeue(queue, front, rear, size, res);
        }
        else{
            printf("Invalid choice!");
        }
        printf("Continue?(Y/N)");
        scanf(" %c",&ch);
    }

    printf("The queue is: \n");
    traverse(queue, front, rear, size);

}



int enqueue(int queue[8],int front, int rear,int size, int value){
    if((front==0 && rear==(size-1))||(front==(rear+1))){
        printf("Overflow!");
        return 0;
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
    }
    else{
        rear=(rear+1)%size;
    }
    queue[rear]=value;
}

int dequeue(int queue[8],int front, int rear,int size, int value){
    if(front==-1 && rear==-1){
        printf("Underflow!");
        return 0;
    }
    else if(front==rear){
        value=queue[front];
        front=-1;
        rear=-1;
    }
    else{
        value=queue[front];
        front=(front+1)%size;
    }
    return(value);
}


void traverse(int queue[8],int front, int rear,int size){
    int i;

    for(i=front;i!=rear;i=(i+1)%size){
        printf("%d",queue[i]);
    }
}






/*WAP to evalueate postfix expression.
Implement circular queue using array and LL.*/

/*//Circular Queue

#include<stdio.h>
int front=-1;
int rear=-1;
int size=8;

int queue[8];

void enqueue()
{
    int val;
    if((front==0 && rear==size-1) || (front==rear+1))
    {
        printf("\nOverflow\n");
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
    }
    else 
    {
        rear=(rear+1)%size;
    }
    printf("Enter the value: ");
    scanf("%d",&val);
    queue[rear]=val;
}

void dequeue()
{
    int value;
    if(front==-1 && rear==-1)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else if(front==0 && rear==0)
    {
        value=queue[front];
        front=rear=-1;
    }
    else
    {
        value=queue[front];
        front=(front+1)%size;
    }
    printf("DEQUEUED Value: %d\n",value);
}

void traversing()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("\nElements in the queue is:\n");
        for(int i=front;i!=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
        printf("%d\n",queue[rear]);
    }
}

int main()
{
    char ch;
    printf("Do you want to enqueue (y/n): ");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        enqueue();
        printf("Do you want to enqueue (y/n): ");
        scanf(" %c",&ch);
    }
    traversing();

    printf("After Dequeue the queue is: \n");
    dequeue();
    traversing();
    return 0;
}*/