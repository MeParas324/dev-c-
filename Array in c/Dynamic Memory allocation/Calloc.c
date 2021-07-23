#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ctr;
	int i;
	
	ctr=(int*)calloc(6, sizeof(int));
	
	for(i=0; i<6; i++)
	{
		printf("Enter the number in %d location of the array:\n", i);
		scanf("%d", &ctr[i]);
	}
	
	for(i=0; i<6; i++)
	{
		printf("The number in %d location of the array is %d:\n", i, ctr[i]);
	}
	
	return 0;
}
