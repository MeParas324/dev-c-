#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Uses of Malloc
	int i;
	int *ptr;
	ptr=(int*) malloc(3*sizeof(int));
	for(i=0; i<3; i++)
	{
		printf("Enter the %d value in the array:\n", i);
		scanf("%d", &ptr[i]);
	}
	for(i=0; i<5; i++)
	{
		printf(" the  value at %d  in the array is %d:\n", i, ptr[i]);
	
	}
	
	return 0;
	
	
}
