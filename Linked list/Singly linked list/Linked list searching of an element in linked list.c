#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void Traversal(struct node *ptr){
	while (ptr!=NULL){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}

void Searching(struct node *ptr, int item){
	
	int pos = 1;
	while (ptr!=NULL){		
		if(ptr->data == item)
		{
			printf("The element %d you are searching is found at %d position\n", item, pos);
			break;
		}
		ptr = ptr->next;
		pos++;
	}
	
	if(ptr == NULL)
	{
	printf("The element %d is not found in linked list\n", item);
    }
}

int main(){
	
	struct node *First = (struct node*)malloc(sizeof(struct node));
	struct node *Second = (struct node*)malloc(sizeof(struct node));
	struct node *Third = (struct node*)malloc(sizeof(struct node));
	struct node *Fourth = (struct node*)malloc(sizeof(struct node));
	
	First->data = 34;
	First->next = Second;
	
	Second->data = 50;
	Second->next = Third;
	
	Third->data = 90;
	Third->next = Fourth;
	
	Fourth->data = 57;
	Fourth->next = NULL;
	
	printf("Linked list is..\n");
	Traversal(First);
	
	int item;
	printf("\nEnter the number you want to search:\n");
	scanf("%d", &item);
	
	Searching(First, item);
	
	
}
