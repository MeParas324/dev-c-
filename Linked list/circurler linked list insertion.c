#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
   struct Node *ptr = head;
   do{
   	printf("Element:%d\n", ptr->data);
   	ptr=ptr->next;
    }while(ptr!=head);
}

struct Node * insertatfirst(struct Node *head, int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    
    struct Node *p = head->next;
    while(p->next!=head)
    {
    	p=p->next;
	}
	p->next = ptr;
	ptr->next = head;
	head = ptr;
	return head;
   
    return ptr;
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = head;
    
    printf("List before insertion.....\n");
    linkedListTraversal(head);
    head=insertatfirst(head, 34);
    printf("Linked list after insertion.....\n");
    linkedListTraversal(head);
    return 0;
}
