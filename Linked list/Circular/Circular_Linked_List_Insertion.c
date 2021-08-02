#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void insertAtAfter(struct node**head, int val, int data)
{
    struct node *new_element = (struct node *)malloc(sizeof(struct node));
    new_element->data = data;
    struct node* ptr = *head;
    while (ptr->data != val && ptr->next != *head)
    {
        ptr = ptr->next;
    }
    if(ptr->data != val)
       return;
    new_element->next = ptr->next;
    ptr->next = new_element;
}


void insertAtBefore(struct node **head, int val, int data)
{
    struct node *new_element = (struct node *)malloc(sizeof(struct node));
    new_element->data = data;
    struct node* ptr = *head;
    if(*head == NULL)
       return;
    if ((*head)->data == val)
    {
        new_element->next = *head;
        *head = new_element;
        while (ptr->next != *head)
            ptr = ptr-> next;
        ptr->next = new_element;
    } else {
        while (ptr->next->data != val && ptr->next != *head)
        {
            ptr = ptr-> next;
        }
        if(ptr->next->data != val){
        	return;
		}
        new_element ->next = ptr->next;
        ptr->next = new_element;
    }
}


void insertAtBeg(struct node **head, int element)
{
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->data = element;
	if(*head == NULL)
	{
		*head = n;
		(*head)->next = *head;
		
	}
	else
	{
		struct node *ptr = *head;
		n->next = *head;
		while(ptr->next != *head)
		  ptr = ptr->next;
		  
		ptr->next = n;
		*head = n;
	}
}

void insertAtEnd(struct node **head, int element)
{
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->data = element;
	if(*head == NULL)
	{
		*head = n;
		(*head)->next = *head;	
	}
	else
	{
		struct node *ptr = *head;
		while(ptr->next != *head)
		{
			ptr = ptr->next;
		}
		n->next = *head;
		ptr->next = n;
	}
}

void traversal(struct node *head)
{
	struct node *ptr = head;
	if(ptr == NULL)
	{
		printf("Circular linked list empty\n");
	}
	else{
		do{
			printf("%d ", ptr->data);
			ptr = ptr->next;
		}while(ptr != head);
	}
}
int main()
{
	int choice, nod, element;
	struct node *head = NULL;
	
	while(1)
	{
		printf("\n1.Insertion at beginning:");
		printf("\n2.Insertion at end:");
		printf("\n3.Insertion before a node:");
		printf("\n4.Insertion after a node:");
		printf("\n5.Display all elements of circular queue:");
		printf("\n6.Quit\n");
		
		printf("\nEnter your choice\n");
		scanf("%d", &choice);
		
		switch(choice){
			
			case 1:
				printf("\nEnter the element you want to insert at beginning:");
				scanf("%d", &element);
				insertAtBeg(&head, element);
				break;
				
			case 2:
				printf("\nEnter the element you want to insert at end:");
				scanf("%d", &element);
				insertAtEnd(&head, element);
				break;
				
			case 3:
				printf("\nEnter the you want to insert before a node:");
				scanf("%d", &element);
				printf("Enter the value of node you want to insert element before:");
				scanf("%d", &nod);
				insertAtBefore(&head, nod, element);
				break;
				
			case 4:
				printf("\nEnter the you want to insert after a node:");
				scanf("%d", &element);
				printf("Enter the value of node you want to insert element after:");
				scanf("%d", &nod);
				insertAtAfter(&head, nod, element);
				break;
			
			case 5:
				printf("\nDisplaying all elements of Circular linked list\n");
				traversal(head);
				break;
				
			default:
				printf("Quitting the program\n");
				exit(0);
				
		}
	}
	
	
}
