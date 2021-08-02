// linked list
#include <stdio.h>
#include <malloc.h>
// node of linked list
struct Node
{
    int data;
    struct Node *next;
};
// insert at beg
void insert_at_beg(struct Node **head, int data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr = *head;
    new_node->data = data;
    if (*head == NULL)
    {
        *head = new_node;
        new_node -> next = *head;
    } else {
        new_node->next = *head;
        while (ptr->next != *head) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        *head = new_node;
    }
}
void insert_at_end(struct Node **head, int data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr = *head;
    new_node->data = data;
    if (*head == NULL)
    {
        *head = new_node;
        new_node ->next = *head;
    } else {
        while (ptr->next != *head)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}
void insert_after(struct Node**head, int val, int data)
{
    struct Node *new_element = (struct Node *)malloc(sizeof(struct Node));
    new_element->data = data;
    struct Node* ptr = *head;
    while (ptr->data != val && ptr->next != *head)
    {
        ptr = ptr->next;
    }
    new_element->next = ptr->next;
    ptr->next = new_element;
}
// insert before
void insert_before(struct Node **head, int val, int data)
{
    struct Node *new_element = (struct Node *)malloc(sizeof(struct Node));
    new_element->data = data;
    struct Node* ptr = *head;
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
        new_element ->next = ptr->next;
        ptr->next = new_element;
    }
}
void delete_at_beg(struct Node** head)
{
    if (*head == NULL) return;
    struct Node* temp = *head, *ptr = *head;
    // moving ptr to the last element
    while (ptr->next != *head)
        ptr = ptr-> next;
    // deleting first element
    *head = (*head)->next;
    free(temp);
    // pointing ptr->next to head
    ptr ->next = *head;
}
void delete_at_end(struct Node** head)
{
    struct Node *ptr = *head, *temp;
    while (ptr->next->next != *head)
    {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
}
void delete_after(struct Node** head, int val)
{
    struct Node* ptr = *head, *temp;
    while (ptr->data != val && ptr->next != *head)
        ptr = ptr->next;
    if (ptr->data == val) {
        temp = ptr->next;
        ptr->next = ptr->next->next;
        free(temp);
    }
}
void delete_before(struct Node** head, int val)
{
    struct Node* ptr = *head, *temp;
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
void display(struct Node* head)
{
    struct Node *ptr = head;
    do
    {
        printf("%d ->", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

void sort(struct Node * head)
{
    int s;
    struct Node* ptr;
    int temp;
    struct Node* preptr = NULL;
    if (head == NULL) return;
    do {
        s = 0;
        ptr = head;
        while (ptr->next != preptr && ptr->next != head)
        {
            if (ptr->data > ptr->next->data)
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

struct Node* merge(struct Node** head1,struct Node** head2)
{
    // head 1 = 2 1 5 4 3
    // head 2 = 5 6 2 6 4
    sort(*head1);
    sort(*head2);
    printf("\n");
    display(*head1);
    printf("\n");
    display(*head2);
    // head 1 = 1 2 3 4 5
    // head 2 = 2 4 5 6 6
    struct Node *head3 = NULL;
    struct Node *ptr = *head1,*ptr2=*head2,*ptr3;

    while(ptr->next !=*head1 && ptr2->next !=*head2)
    {

        if(ptr->data > ptr2->data)
        {
            insert_at_end(&head3,ptr2->data);
            ptr2 = ptr2->next;
        }else{

            insert_at_end(&head3,ptr->data);
            ptr = ptr->next;
        }
        if(ptr->data > ptr2->data)
        {
            insert_at_end(&head3,ptr2->data);
        }else{

            insert_at_end(&head3,ptr->data);
        }
    }
    while(ptr->next!= *head1)
    {
        printf("h1");
        insert_at_end(&head3,ptr->data);
        ptr = ptr->next;
    }
    
    while(ptr2->next!= *head2)
    {
        printf("h2");
        insert_at_end(&head3,ptr2->data);
        ptr2 = ptr2->next;
    }
    return head3;
}

int search(struct Node* head, int val)
{
    int pos = -1;
    struct Node *ptr = head;
    do
    {

        if (val == ptr->data);
        return pos;
        pos++;
        ptr = ptr->next;
    } while (ptr != head);

    return -1;
}
int main(int argc, char const *argv[])
{
    struct Node *head = NULL;
    struct Node *head2 = NULL;

    insert_at_beg(&head, 22); // 22
    insert_at_beg(&head, 55); // 55 22
    insert_at_beg(&head, 7);  // 7 55 22
    insert_at_beg(&head, 2);  // 2 7 55 22
    insert_at_end(&head, 99);
	insert_at_beg(&head2, 220); // 22
    insert_at_beg(&head2, 5); // 55 22
    insert_at_beg(&head2, 7);  // 7 55 22
    insert_at_beg(&head2, 28);  // 2 7 55 22
    insert_at_end(&head2, 9); // 2 7 55 22 99
    display(head);
    printf("\n");
    display(head2);
    insert_before(&head, 7, 5); // 2 5 7 55 22 99
    insert_before(&head, 99, 2); // 2 5 7 55 22 2 99
    display(head);
    printf("\n");
    insert_after(&head, 7, 5); // 2 5 7 5 55 22 2 99
    insert_after(&head, 99, 100);  // 2 5 7 5 55 22 2 99 100
    display(head);
    delete_at_beg(&head); // 5 7 5 55 22 2 99 100
    printf("\n");
    display(head);
    delete_at_end(&head); // 5 7 5 55 22 2 99
    printf("\n");
    display(head);
    delete_before(&head, 55); // 5 7 55 22 2 99
    printf("\n");
    display(head);
    delete_after(&head, 55); // 5 7 55 2 99
    printf("\n");
    display(head);
    
    struct Node *head3 = merge(&head, &head2);
    display(head3);
    return 0;
}
