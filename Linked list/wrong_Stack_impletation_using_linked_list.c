#include<stdio.h>
#include<stdlib.h>

int count = 0;
struct node{
	int data;
	struct node *next;
}*top;


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
		printf("The element you pushed is %d", x);
	    count ++;
		return top;
		
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


int pop(struct node *tp)
{
	if(isEmpty(tp)){
		printf("Stack is Underflow....\n");
		return 0;
	}
	else
	{
		struct node *p = tp;
		top = tp->next;
		int x = p->data;
		free(p);
		count --;
		return x;
		
		
		
	}

	
}

void display(struct node *top)
{
	while(top!=NULL)
	{
		printf("Element:%d \n", top->data);
		top = top->next;
	}
}

void stack_count()
{
	printf("No of elements in the stack is %d ", count);
}

void destroy()
{
	struct node *p = top;
	
	while(top!=NULL)
	{
		p = p->next;
		free(top);
		top = p;
	}
	top = NULL;
	
	printf("All elements are destroyed.\n");
}

int main()
{
	int ch, n, a;
	top = NULL;
	
	
	while(1){
		printf("\n1-Push");
		printf("\n2-Pop");
		printf("\n3-Display");
		printf("\n4-Stack count");
		printf("\n5-Destroy stack");
		printf("\n6-Quit");
		
		printf("\nEnter your choice:\n");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter the number you want to push:\n");
				scanf("%d", &n);
				top = push(top, n);
				break;
				
			case 2:
				a = pop(top);
				printf("The element you popped %d \n", a);
				break;
				
			case 3:
				if(top == NULL)
				{
					printf("No elements are available in the stack.\n");
				}
				else{
					display(top);
				}
				break;
				
			case 4:
				stack_count();
				break;
				
			case 5: 
			    destroy();
			    break;
			    
			case 6:
				default:
					printf("Wrong choice...");
					exit(0);
				
	    }
				
	}
}
