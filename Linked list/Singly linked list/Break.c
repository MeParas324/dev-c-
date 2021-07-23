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


void odd(struct node *ptr)
{
	while(ptr->next->next != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next->next;
	}
	ptr->next = NULL;
	
}

void even(struct node *ptr)
{
	int i;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next->next;
	}
}




int main()
{
	int i =0;
	struct node *First = createNode(2);
	struct node *Second = createNode(56);
	struct node *Third = createNode(9);
	struct node *Fourth = createNode(89);
	struct node *Fifth = createNode(23);
	struct node *Sixth = createNode(69);
	
	First->next = Second;
	Second->next = Third;
	Third->next = Fourth;
	Fourth->next = Fifth;
	Fifth->next = Sixth;
	Sixth->next = NULL;
	
	printf("Normal linked list:\n");
	Traversal(First);
	
	printf("Odd Linked list before dividing:\n");
	odd(First);

	printf("\n Even Linked list after dividing:\n");
	even(First->next);
	
	
	
}
