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
        ptr = *head;
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

void deleteAtBeg(struct node **head)
{
	struct node *ptr = *head;
	struct node *temp = *head;
	if(*head == NULL){
		printf("Linked list is empty!Cannot delete element\n");
		return ;
	}
	while(ptr->next != *head){
		ptr = ptr->next;
	}
	*head = (*head)->next;
	free(temp);
	ptr->next = *head;
	
}

void deleteAtEnd(struct node **head){
	struct node *ptr = *head;
	struct node *temp;
	if(*head == NULL){
		printf("Circular linked list is empty\n");
		return ;
	}
	if(ptr->next == *head){
		temp = ptr;
		free(temp);
		*head = NULL;
	}
	
	else{
	while(ptr->next->next != *head){
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	free(temp);
    }
}

void deleteAfterNode(struct node **head, int val){
	struct node *ptr = *head;
	struct node *temp;
	
	if(*head == NULL){
		printf("Linked list is empty\n");
		return ;
	}
	if(ptr->data == val && ptr->next == *head){
		printf("Only 1 element available in linked list\n");
	}
	
	else{
	while(ptr->data != val && ptr->next != *head){
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	free(temp);
    }
}

void deleteBeforeNode(struct node **head, int val){
	
    struct node *ptr = *head, *temp;
    if(*head == NULL)
    {
    	printf("List is emoty\n");
    	return;
	}
	if(ptr->data == val, ptr->next == *head){
		printf("Only 1 node available here\n");
		return ;
	}
    if ((*head)->next->data == val)
    {
        // delete_at_beg(head);
        while (ptr->next != *head)
            ptr = ptr-> next;
        *head = (*head)->next;
        free(temp);
        ptr ->next = *head;
    } else {
        while (ptr->next->next->data != val && ptr->next != *head)
        {
            ptr = ptr->next;
        }
        if (ptr->next->next->data == val)
        {
            temp = ptr->next;
            ptr->next = ptr->next->next;
            free(temp);
        }
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
		printf("\n5.Deletion at beginning:");
		printf("\n6.Deletion at end:");
		printf("\n7.Deletion after a node:");
		printf("\n8.Deletion before a node:");
		printf("\n9.Display all elements of circular queue:");
		printf("\n10.Quit\n");
		
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
				printf("\nEnter the number you want to insert before a node:");
				scanf("%d", &element);
				printf("Enter the value of node you want to insert element before:");
				scanf("%d", &nod);
				insertAtBefore(&head, nod, element);
				break;
				
			case 4:
				printf("\nEnter the number you want to insert after a node:");
				scanf("%d", &element);
				printf("Enter the value of node you want to insert element after:");
				scanf("%d", &nod);
				insertAtAfter(&head, nod, element);
				break;
				
			case 5:
				printf("\nDeletion of beginning element:");
				deleteAtBeg(&head);
				break;
				
			case 6:
				printf("Deletion at ending:\n");
				deleteAtEnd(&head);
				break;
				
			case 7:
				printf("\nEnter the node after you want to delete a node\n");
				scanf("%d", &nod);
				deleteAfterNode(&head, nod);
				break;
				
			case 8:
				printf("\nEnter the node before you want to delete a node:");
				scanf("%d", &nod);
				deleteAfterNode(&head, nod);
				break;
					
			case 9:
				printf("\nDisplaying all elements of Circular linked list\n");
				traversal(head);
				break;
				
			default:
				printf("Quitting the program\n");
				exit(0);
				
		}
	}
	
	
}
