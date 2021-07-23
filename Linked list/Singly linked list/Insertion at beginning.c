#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createNode(int item){
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->data = item;
	
	return n;
}

void Traversal(struct node *ptr)
{
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}

void insertAtStart(struct node *ptr, int item)
{
	struct node *s = ptr;
	struct node *temp = createNode(item);
	temp->next = s;
	s = temp;
	printf("New linked list is...\n");
	Traversal(s);
	
	
}


int main()
{
	struct node *First = createNode(2);
	struct node *Second = createNode(56);
	struct node *Third = createNode(9);
	struct node *Fourth = createNode(89);
	struct node *Fifth = createNode(23);
	
	First->next = Second;
	Second->next = Third;
	Third->next = Fourth;
	Fourth->next = Fifth;
	Fifth->next = NULL;
	
	printf("Linked list is ...\n");
	Traversal(First);
	
	int item;
	
	printf("\nEnter the element you want to insert...\n");
	scanf("%d", &item);
	
	insertAtStart(First, item);	
	
}
