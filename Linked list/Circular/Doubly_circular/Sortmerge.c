#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

void insert(struct node **head, int element){
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = element;
    if(*head == NULL){
        n->next = n;
        n->pre = n;
        *head = n;
    }
    else{
        struct node *ptr = *head;
        while(ptr->next != *head){
            ptr = ptr->next;
        }
        n->next = *head;
        n->next->pre = n;
        ptr->next = n;
        n->pre = ptr;
        *head = n;
    }
}

void traversal(struct node *head){
    struct node *ptr = head;
    do{
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

void sort(struct node **head){
    int s, temp;
    struct node *ptr;
    struct node *preptr = *head;
    do{
       s = 0;
       ptr = *head;
        do{
           if(ptr->data > ptr->next->data){
               temp = ptr->data;
               ptr->data = ptr->next->data;
               ptr->next->data = temp;
               s = 1;
        }   
        ptr = ptr->next;
       }while(ptr->next != preptr);
       preptr = ptr;    
    } while (s == 1);
}

void insertAtEnd(struct node **head, int element){
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = element;
    if(*head == NULL){
        n->pre = n;
        n->next = n;
        *head = n;
    }
    else{
        struct node *ptr = *head;
        while(ptr->next != *head){
            ptr = ptr->next;
        }
        ptr->next = n;
        n->pre = ptr;
        n->next = *head;
    }
}

void sortMerge(struct node **head1, struct node **head2, struct node **head3){
  
}

int main()
{
    int element, n, m, i;
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    struct node *head3 = NULL;

    printf("Enter the number of elements in 1 st linked list\n");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        printf("Enter %d element into the linked list\n", i);
        scanf("%d", &element);
        insert(&head1, element);
    }

    printf("Enter the number of elements in 2 st linked list\n");
    scanf("%d", &m);
    for(i = 1; i<=m; i++){
        printf("Enter %d element into the linked list\n", i);
        scanf("%d", &element);
        insert(&head2, element);
    }

    printf("Before Merging and sorting linked lists are\n");
    printf("1st linked list:\n");
    traversal(head1);
    printf("\n2 nd linked list:\n");
    traversal(head2);

    printf("\nAfter sorting 1 st linked list is:\n");
    sort(&head1);
    traversal(head1);

    printf("\nBefore sorting 2 nd linked list is:\n");
    sort(&head2);
    traversal(head2);

    sortMerge(&head1, &head2, &head3);
    printf("\nSorted merged linked list is:\n");
    traversal(head3);
}
