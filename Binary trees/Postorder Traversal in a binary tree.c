#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* createNode(int item)
{
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->data = item;
	n->left = NULL;
	n->right = NULL;
	
	return n;
}

void preOrder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		printf("%d ", ptr->data);
		preOrder(ptr->left);
		preOrder(ptr->right);
	}
}

void postOrder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		postOrder(ptr->left);
		postOrder(ptr->right);
		printf("%d ", ptr->data);
	}
}
int main()
{
	struct node *First = createNode(4);
	struct node *Second = createNode(1);
	struct node *Third = createNode(6);
	struct node *Fourth = createNode(5);
	struct node *Fifth = createNode(2);
	
	/*   4
	   /  \
	  1    6
	 / \    
	5   2
	
	*/
	
	First->left = Second;
	First->right = Third;
	
	Second->left = Fourth;
	Second->right = Fifth;
	
	printf("PreOrder Traversal is....\n");
	preOrder(First);
	
	printf("\nPostOrder Traversal is....\n");
	postOrder(First);
	
	
	
}
