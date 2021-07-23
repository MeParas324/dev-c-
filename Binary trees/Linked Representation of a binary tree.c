#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* createnode(int item){
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = item;
	n->left = NULL;
	n->right = NULL;
	return n;
}

int main()
{
	struct node *p1 = createnode(2);
	struct node *p2 = createnode(3);
	struct node *p3 = createnode(4);
	
	p1->left = p2;
	p1->right = p3;
	
	return 0;
}
