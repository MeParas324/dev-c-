
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void Rtraversal(struct Node *last)
{
    while (last != NULL)
    {
        printf("Element: %d\n", last->data);
        last = last->prev;
    }
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
    head->prev = NULL;
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->prev = head;
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->prev = second;
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->prev = third;
    fourth->data = 66;
    fourth->next = NULL;
    
    printf("linked list normal traversal.....\n");
    Traversal(head);
    printf("linked list reverse traversal.....\n");
    Rtraversal(fourth);
    
    return 0;
}
