
#include<stdio.h>
int insertarray(int *a, int size, int capacity, int index, int num);
void display(int *a, int size);

int main()
{
	int a[20]={3,5,3,6,3,6,5,7};
	int insnum;
	int size=8;
	int index;
	
	printf("Enter the number you want to insert in array:\n");
	scanf("%d",&insnum);
	
	printf("In which position you wannt to enter the element from 1-8:\n");
	scanf("%d", &index);

	insertarray(a,size,20,index-1,insnum);
	
	size=size+1;
	
	display(a,size);
	
	
}
int insertarray(int *a, int size, int capacity, int index, int num)
{
	int i;
	if(size>=capacity)
	{
		return -1;
	}
	for(i=size-1;i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=num;
	
}
void display(int *a, int size)
{
	int i;
	for ( i=0;i<size;i++)
	printf(" %d ",a[i] );
}
