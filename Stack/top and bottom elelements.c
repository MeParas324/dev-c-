#include<stdio.h>
#define MAX 5
int top = 4 ;

int stackbottom(int *p)
{
	return (p[0]);
}

int stacktop(int *p)
{
	return (p[top]);
}

int push(int *s, int top, int item)
{
	if(top==MAX-1)
	{
		printf("Stack is overflow...\n");
		return -1;
	}
	else
	{
		top = top + 1;
		s[top] = item;
		printf("The element you pushed %d", s[top]);
	}

	return top;
}

int main()
{
	int stack[MAX]={23,45,5643,45,67},choice;
	
	printf("\n.1-Bottomstack\n.2-Stacktop\n.3-Quit\n");
	printf("Enter your choice between (1-3):\n");
	scanf("%d", &choice);
		
	switch(choice)
	{
		case 1:
			printf("The bottom stack element is %d ", stackbottom(stack));
         	break;
    	
    	case 2:
		   	printf("The stack top element is %d ", stacktop(stack));
		    break;
    	break;
    	
    	case 3:
		   default:
		        printf("Wrong choice....");
		    
	}
	
	return 0;
}





