#include<stdio.h>
#include<stdlib.h>

struct stu{
	int item;
	struct stu *p;
};

void traversal(struct stu *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element: %d\n", ptr->item);
		ptr=ptr->p;
		
	}
}

struct stu *delend(struct stu *ptr)
{
	struct stu *q = ptr;
	struct stu *s = ptr->p;
	
	while(s->p!=NULL)
	{
		s = s->p;
		q = q->p;
	}
	q->p=NULL;
	
	free(s);
	return ptr;
	
}
int main()
{
	struct stu *head;
	struct stu *second;
	struct stu *third;
	struct stu *fourth;
	struct stu *fifth;
	
	head = (struct stu *)malloc(sizeof(struct stu));
	second = (struct stu *)malloc(sizeof(struct stu));
	third = (struct stu *)malloc(sizeof(struct stu));
	fourth = (struct stu *)malloc(sizeof(struct stu));
	fifth = (struct stu *)malloc(sizeof(struct stu));
	
	head->item = 67;
	head->p = second;
	
	second->item = 7;
	second->p = third;
	
	third->item = 673;
	third->p = fourth;
	
	fourth->item = 167;
	fourth->p = fifth;
	
	fifth->item = 16;
	fifth->p = NULL;
	
	printf("Before traversal....\n");
	traversal(head);
	head = delend(head);
	printf("Before traversal....\n");
	traversal(head);	
	
	
}
