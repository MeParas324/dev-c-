#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void traversal(struct node *top)
{
	while(top!=NULL)
	{
		printf("Element:%d \n", top->data);
		top = top->next;
	}
}

int isEmpty(struct node *top)
{
	if(top == NULL)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int isFull()
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	if(p == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

struct node * push(struct node *top, int x)
{
	if(isFull()){
		printf("Stack is overflow....\n");
	}
	else
	{
		struct node *p = (struct node *)malloc(sizeof(struct node));
		p->data = x;
		p->next = top;
		top = p;
		return top;
		
	}
	
}

int pop(struct node **top)
{
	if(isEmpty(*top)){
		printf("Stack is Underflow....\n");
	}
	else
	{
		struct node *p = *top;
		*top = (*top)->next;
		int x = p->data;
		free(p);
		return x;
		
		
		
	}
	
}

int main()
{
	struct node *top = NULL;
	top = push(top, 56);
	top = push(top, 5);
	top = push(top, 6);
	top = push(top, 9856);
	int element = pop(&top);
	printf("Popped element is %d\n", element);
	traversal(top);
	
	return 0;
}
