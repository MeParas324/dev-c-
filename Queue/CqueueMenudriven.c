#include <stdio.h>
#include <malloc.h
 node of linked list
struct Node
{
    int data;
    struct Node next;
};
 insert at beg
void insert_at_beg(struct Node head, int data)
{
    struct Node new_element = (struct Node )malloc(sizeof(struct Node));
    new_element-data = data;
    if (head == NULL)
    {
        head = new_element;
        new_element-next = NULL;
    }
    else
    {
        new_element-next = head;
        head = new_element;
    }
}
 insert at end
void insert_at_end(struct Node head, int data)
{
    struct Node new_element = (struct Node )malloc(sizeof(struct Node));
    new_element-data = data;
    new_element-next = NULL;
    if (head == NULL)
    {
        head = new_element;
    } else {
        struct Node ptr = head;
         moving ptr to the last node
        while (ptr-next != NULL)
            ptr = ptr-next;
        ptr-next = new_element;
    }
}
 insert before
void insert_before(struct Node head, int data, int val)
{
    struct Node new_element = (struct Node )malloc(sizeof(struct Node));
    new_element-data = data;
    struct Node ptr = head;
    if ((head)-data == val)
    {
        new_element-next = head;
        head = new_element;
    } else {
        while (ptr-next-data != val)
        {
            ptr = ptr- next;
        }
        new_element -next = ptr-next;
        ptr-next = new_element;
    }
}
 insert after
void insert_after(struct Node head, int data, int val)
{
    struct Node new_element = (struct Node )malloc(sizeof(struct Node));
    new_element-data = data;
    struct Node ptr = head;
    while (ptr-data != val)
        ptr = ptr-next;
    new_element-next = ptr-next;
    ptr-next = new_element;

}

 delete at begining
void delete_at_beg(struct Node  head)
{
     store head element in temp
    struct Node temp = head;
     point the head pointer to the next element
    head = (head)-next;
     delete temp
    free(temp);
}

 delete at end
void delete_at_end(struct Node  head)
{
    struct Node ptr = head, temp;
    if ((head)-next == NULL)
    {
        temp = head;
        head = NULL;
        free(temp);
    } else {
        while (ptr-next-next != NULL)
        {
            ptr = ptr-next;
        }
        temp = ptr-next;
        ptr-next = NULL;
        free(temp);
    }
}
 delete after
void delete_after(struct Node head, int val)
{
    struct Node ptr = head, temp;
    while (ptr-data != val)
    {
        ptr = ptr-next;
    }
    temp = ptr-next;
    ptr-next = ptr-next-next;
    free(temp);

}
 delete before
void delete_before(struct Node head, int val)
{
    struct Node ptr = head, temp;
    if (ptr-next-data == val)
    {
        temp = head;
        head = (head)-next;
    }
    else {
        while (ptr-next-next-data != val)
        {
            ptr = ptr-next;
        }
        temp = ptr-next;
        ptr-next = ptr-next-next;
    }
    free(temp);
}
 display
void display(struct Node head)
{
    struct Node current = head;
    while (current != NULL)
    {
        printf(%d -, current-data);
        current = current-next;
    }
    printf(n);
}
int search(struct Node head, int val)
{
     traveral
    int pos = -1;
    while (head != NULL)
    {
        pos++;
        if (head-data == val) return pos;
        head = head-next;
    }
    return -1;
}
void merge(struct Node head1, struct Node head2)
{
    struct Node ptr = head1;
    if (head1 == NULL)
    {
        head1 = head2;
    } else {

        while (ptr -next != NULL)
        {
            ptr = ptr-next;
        }
        ptr-next = head2;
    }
}
void swap(struct Node a, struct Node b)
{
    int temp;
    temp = a-data;
    a-data = b-data;
    b-data = temp;
}
void sort(struct Node  head)
{
    int s;
    struct Node ptr;
    struct Node preptr = NULL;
    if (head == NULL) return;
    do {
        s = 0;
        ptr = head;
        while (ptr-next != preptr)
        {
            if (ptr-data  ptr-next-data)
            {
                swap(ptr, ptr-next);
                s = 1;
            }
            ptr = ptr-next;
        }
        preptr = ptr;
    } while (s);
}
int main()
{
    struct Node head = NULL, head2 = NULL;
    insert_at_beg(&head, 22);  22
    insert_at_beg(&head, 2);   2 22
    insert_at_beg(&head, 3);   3 2 22
    insert_at_beg(&head, 4);   4 3 2 22
    insert_at_beg(&head, 99);  99 4 3 2 22
    insert_at_beg(&head, 5);   5 99 4 3 2 22
    insert_at_end(&head, 100);  5 99 4 3 2 22 100
    insert_before(&head, 44, 4);  5 99 44 4 3 2 22 100
    insert_after(&head, 6, 3);  5 99 44 4 3 6 2 22 100
    display(head);
    delete_at_beg(&head);  99 44 4 3 6 2 22 100
    delete_at_end(&head);  99 44 4 3 6 2 22
    delete_before(&head, 4);  99 4 3 6 2 22
    delete_after(&head, 3);  99 4 3 2 22
    display(head);
    int pos = search(head, 3);
    if (pos == -1)
    {
        printf(nElement not found);
    } else {
        printf(nElement found at index %d, pos);
    }
    insert_at_beg(&head2, 9);
    insert_at_beg(&head2, 89);
    insert_at_beg(&head2, 72);
    insert_at_beg(&head2, 33);
    printf(nhead 1);
    display(head);
    printf(nhead 2);
    display(head2);
    merge(&head, head2);
    display(head);
    sort(head);
    display(head);
}
