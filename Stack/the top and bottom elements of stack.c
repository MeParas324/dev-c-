#include<stdio.h>
#include<stdlib.h>


struct stack{
	int size;
	int top;
	int *arr;
};

void push(struct stack *p, int val);

int stackbottom(struct stack *p)
{
	return (p->arr[0]);
}

int stacktop(struct stack *p)
{
	return (p->arr[p->top]);
}

int isFull(struct stack *p)
{
	if(p->top== p->size-1)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int choice;
	
	struct stack *s = (struct stack *)malloc (sizeof(struct stack));
	s->size = 100;
	s->top = -1;
	s->arr = (int *)malloc (s->size*(sizeof(int)));
	
	push(s, 5);
	push(s, 345);
	push(s, 435);
	push(s, 4534);
	push(s, 453);
	push(s, 4435);
	push(s, 145);
	push(s, 45);
	push(s, 545);
	
	printf("\n1.Stackbottom\n2.Stacktop\n3.Quit\n");
    printf("enter the choice between 1-3:\n");
    scanf("%d", &choice);
    
    
    
    switch(choice)
    {
    	case 1:
    		printf("The stack Bottom element is %d", stackbottom(s));
    		break;
    	case 2:
    		printf("The stack top element is %d", stacktop(s));
    		break;
    	case 3:
    		default:
    			printf("wrong choice....");
	}
	
	return 0;
	
}
void push(struct stack *p, int val)
{
	if(isFull(p))
	{
		printf("Stack is overflow! Cannot insert the element %d", val);
	}
	else
	{		
		p->top++;
    	p->arr[p->top] = val;	
	}
}  
 

   
