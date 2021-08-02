#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **head, int item)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = item;
    if(*head == NULL)
    {
        n->next = NULL;
        *head = n;
    }
    else
    {
        n->next = *head;
       *head = n;
    }
}

void traversal(struct node *head)
{
    while(head!= NULL)
    {
        printf("%d=>", head->data);
        head = head->next;
    }
}

void sort(struct node **head)
{
    struct node *ptr;
    struct node *preptr = NULL;
    int s, temp;
    if(head == NULL) return ;
    do
    {
        s = 0;
        ptr = head;

        while (ptr->next != preptr)
        {
            if(ptr->data>ptr->next->data)
            {
                  temp = ptr->data;
                  ptr->data = ptr->next->data;
                  ptr->next->data = temp;
                  s = 1;
            }
            ptr = ptr->next;
        }
        preptr = ptr;
        
        
    } while (s);
    
}

void insertAtEnd(struct node **head3, int item)
{
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->data = item;
	n->next = NULL;
	
	if(*head3 == NULL){
		*head3 = n;
	}
	else{
	    (*head3)->next = n;
	}
}

struct Node * sorted_merge(struct Node **head1, struct Node **head2)
{
    // sorting of linked list
    sort(*head1);
    sort(*head2);
    struct Node *head3 = NULL;
    struct Node *ptr1 = *head1, *ptr2 = *head2;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data > ptr2->data) {
            insert_at_end(&head3, ptr2->data);
            ptr2 = ptr2->next;
        }
        else {
            insert_at_end(&head3, ptr1->data);
            ptr1 = ptr1->next;
        }
    }
    while (ptr1 != NULL) {
        insert_at_end(&head3, ptr1->data);
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL) {
        insert_at_end(&head3, ptr2->data);
        ptr2 = ptr2->next;
    }
    return head3;
}


int main()
{
    int i, n, m, element;
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    struct node *head3 = NULL;
    printf("Enter the number of elements into the 1 st linked list\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element you want to insert in 1 st linked list\n", i+1);
        scanf("%d", &element);
        insert(&head1, element);
    }
    printf("\n1 st linked list is\n");
    traversal(head1);
    

    printf("\nEnter the number of elements in 2 nd linked list\n");
    scanf("%d", &m);
    for (i = 0; i<m; i++)
    {
         printf("Enter the %d element you want to insert in 2 st linked list\n", i+1);
         scanf("%d", &element);
         insert(&head2, element);
    }
    printf("\n2 nd linked list is\n");
    traversal(head2);
    
    printf("Merging both linked list\n");
    sort_merge(&head1, &head2);

}
