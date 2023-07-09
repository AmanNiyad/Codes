#include<stdio.h>
#include<stdlib.h>

struct Node{
	int value;
	int row_position;
	int column_postion;
	struct Node *next;
};

void create_new_node(struct Node** head, int non_zero_element,int row_index, int column_index ){
	struct Node *temp, *new;
	temp = *head;
	if (temp == NULL){
		temp = (struct Node *) malloc (sizeof(struct Node));
		temp->value = non_zero_element;
		temp->row_position = row_index;
		temp->column_postion = column_index;
		temp->next = NULL;
		*head = temp;
	}
	else{
		while (temp->next != NULL){
		    temp = temp->next;
        }
		new = (struct Node *) malloc (sizeof(struct Node));
		new->value = non_zero_element;
		new->row_position = row_index;
		new->column_postion = column_index;
		new->next = NULL;
		temp->next = new;
	}
}


void PrintList(struct Node* head)
{
	struct Node *temp, *temp_1, *temp_2;
	temp = temp_1 = temp_2 = head;

	printf("row_position: ");
	while(temp != NULL){
    	printf("%d ", temp->row_position);
		temp = temp->next;
	}
	printf("\n");

	printf("column_postion: ");
	while(temp_1 != NULL)
	{
		printf("%d ", temp_1->column_postion);
		temp_1 = temp_1->next;
	}
	printf("\n");
	printf("Value: ");
	while(temp_2 != NULL)
	{
		printf("%d ", temp_2->value);
		temp_2 = temp_2->next;
	}
	printf("\n");
}


// Driver of the program
int main()
{
// Assume 4x5 sparse matrix
    int m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
	int sparseMatric[m][n];

    printf("Enter elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&sparseMatric[i][j]);
        }
    }

	struct Node* head = NULL;

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (sparseMatric[i][j] != 0){
				create_new_node(&head, sparseMatric[i][j], i, j);
            }
        }
    }
	PrintList(head);

	return 0;
}
