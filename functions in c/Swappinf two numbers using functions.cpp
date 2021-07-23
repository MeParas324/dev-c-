#include<stdio.h>
void swap(int *,int *);

int main()
{
	int n1,n2;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	
	printf("before swapping numbers are %d and %d",n1,n2);
	swap(&n1,&n2);
	
	printf("After swapping numbers are %d and %d",n1,n2);
	
	return 0;
	
}
void swap(int *a,int *b)
{
	int *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}

