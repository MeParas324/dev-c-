#include<stdio.h>

int main()
{
	int i;
	int a[5];
	int *ptr=NULL;
	
	ptr=a;
	
	printf("Enter the elements into the array\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",(ptr + i));
		
	}
	
	printf("Printing the elements of the array\n");
	for(i=0; i<5; i++)
	{
		printf(" %d ",*(ptr+i));
		
	}
		
	
}
