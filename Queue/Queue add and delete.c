#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;
void add();
void delete();
void display();

int main()
{
    int choice;
	
	printf("\n.1-Add\n.2-delete\n.3-Quit\n");
	printf("Enter your choice between (1-3):\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			add();
         	break;
    	
    	case 2:
		    delete();
		    break;
    	
    	case 3:
		    display();
		    break;
    	
    	case 4:
		   default:
		        printf("Wrong choice....");
		    
	}
	
	return 0;
}

void add()
{
	int item;
	if(rear==MAX-1)
	{
		printf("Queue is overflow...\n");
		return ;
	}
	else
	{
		if(front == -1)
		   front = 0;

		rear = rear + 1;
		printf("Enter the element you want to enter in queue..\n");
		scanf("%d", &item);
		printf("the number you add in queue is %d", queue[rear]);
	}
}

void delete()
{
	int temp;
	
	if(front==-1)
	{
		printf("Queue is underflow...\n");
		return ;
	}
	temp = queue[front];
	
	if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		front = front + 1;
	}
	printf("The element you deleted is %d ", temp);
	

}

void display()
{
	int i;
	if(front == -1)
	{
	printf("Queue is emyty...\n");
	return ;
    }
	
	if(rear > front)
	{
		for(i = front; i<=rear; i++)
		printf("Element is %d", queue[i]);
	}
	else
	{
		return ;
	}
}


