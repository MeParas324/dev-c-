#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* createNode(int item){
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->data = item;
	n->left = NULL;
	n->right = NULL;
	
	return n;
	
}

struct node* search(struct node*p, int item)
{
	while(p!=NULL)
	{
		if(p->data == item)
		{
			return p;
		}
		else if(p->data >item){
			p = p->left;
		}
		else{
			p = p->right;
		}
	}
//	return NULL;
}
int main()
{
	int m;
	
	struct node *First = createNode(5);
	struct node *Second = createNode(3);
	struct node *Third = createNode(7);
	struct node *Fourth = createNode(-1);
	struct node *Fifth = createNode(4);
	
	First->left = Second;
	First->right = Third;
	
	Second->left = Fourth;
	Second->right = Fifth;
	
	printf("Enter the number you want to search in binary tree\n");
	scanf("%d", &m);
	
	struct node *n = search(First, m);
	if(n!=NULL)
	{
		printf("Element %d found.\n", m);
	}
	else
	{
		printf("Element is not found.\n");
	}
	
}
