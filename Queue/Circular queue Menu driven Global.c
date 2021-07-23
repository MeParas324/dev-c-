#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void add(int);
void del();
void display();


int rear = -1;
int front = -1;
int cqueue[MAX];

int main()
{
	int choice, item;
	
	while(1){
		printf("\n'''''''''''''''Stack Menu'''''''''''''''\n");
		printf("\n.1-Add\n");
		printf("\n.2-Del\n");
		printf("\n.3-Dis\n");
		printf("\n.4-Exit\n");
		
		printf("Enter your choice:\n");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Enter the element you want add in cqueue:\n");
				scanf("%d", &item);
				add(item);
				break;
			
			case 2:
				del();
				break;
			
			case 3:
			    display();
			    break;
			    
			case 4:
				default:
					printf("Exiting from the program!\n");
					exit(0);
		}
					
	}
}

void add(int item){
	if((front == 0 && rear == MAX - 1) || (front = rear + 1)){
		printf("Cqueue Full!Overflow condition.\n");
		return ;
	}
	else{
	   if(rear == MAX - 1){
	    	rear = 0;
	   }
	   else if(front == -1){
	    	rear = 0;
	    	front = 0;
	   }
	   else{
	    	rear = rear + 1;
	  }
	cqueue[rear] = item;
	printf("The element you inserted in cqueue is %d", cqueue[rear]);
   }
}

void del()
{   int temp;
	if(front == -1){
		printf("Cqueue is empty!Underflow condition.\n");
	}
	else{
		temp = cqueue[front];
		if(front == rear){
			front = -1;
			rear = -1;
		}
		else if(front == MAX - 1){
			front = 0;
		}
		else{
			front = front + 1;
		}
	    printf("The element you deleted is %d\n", temp);
	}
}

void display(){
	
	int i;
	
	if(front == -1){
		printf("Cqueue is empty!Underflow condition\n");
	}
	else{
		
		if(front <= rear){
			for(i = front; i <= rear; i++)
			{
				printf("%d ", cqueue[i]);
			}
		}
		else{
			for(i = front; i<=  MAX - 1; i++){
				printf("%d ", cqueue[i]);
			}
			for(i = 0; i <= rear; i++){
				printf("%d ", cqueue[i]);
			}
			
		}
	}
}
