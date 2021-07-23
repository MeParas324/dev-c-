#include<stdio.h>
#define MAX 5
int front = -1;
int rear = -1;
int queue[MAX];

void push();
void pop();
void display();

int main()
{
	int choice;
	
	while(1){
		printf("\nChoose Your choice\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Quit");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				push();
				break;
			
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
			
			case 4:
				default:
					printf("wrong choice\n");
					return 0;
			}
	}
}

void push()
{
	int item;
	
	if(rear == MAX -1){
		printf("Stack is overflow...\n");
	}
	if(front == -1)
		front = 0;
	rear = rear +1;
	printf("enter the element you want to pushed\n");
	scanf("%d", &item);
	queue[rear]= item;
	printf("The element you pushed is %d", queue[rear]);
}

void pop()
{
	int temp;
	
	if(front == -1){
		printf("Stack is underflow..\n");
	}
	temp = queue[front];
	
	if(front == rear){
		front = -1;
		rear = -1;
	}
	else{
		front = front + 1;
	}
	printf("The element is deleted is %d\n", temp);
}

void display(){
	int i;
	
	if(front == -1){
		printf("Stack is underflow..\n");
	}
	else
	{
		for(i = front; i<= rear; i++)
		printf("Element is %d\n", queue[i]);
	}
	printf("\n");
}
