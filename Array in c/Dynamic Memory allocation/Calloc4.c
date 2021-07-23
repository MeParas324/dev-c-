#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ctr;
	int n;
	int i;
	
	printf("Enter the number of elements you want to enter in the array:\n");
	scanf("%d", &n);
	
	ctr=(int*)calloc(n, sizeof(int));
//	
	for(i=0; i<n; i++)
	{
		printf("Enter the element at %d position in the array:\n", i);
		scanf("%d", (ctr + i));
	}
		
	for(i=0; i<n; i++)
	{
		printf("The element at %d position in the array is %d\n", i,*(ctr+i));
	}
	free(ctr);
	
		for(i=0; i<n; i++)
	{
		printf("Enter the element at %d position in the array:\n", i);
		scanf("%d", (ctr + i));
	}
		
	for(i=0; i<n; i++)
	{
		printf("The element at %d position in the array is %d\n", i,*(ctr+i));
	}
	
	return 0;
	
}
