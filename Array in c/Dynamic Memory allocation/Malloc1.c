#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n;
	int i;
	
	printf("Enter the number of elements in the array:\n");
	scanf("%d", &n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
	{
		printf("Enter the number at %d location in the array:\n", i);
        //scanf("%d",&ptr[i]);
        scanf("%d",(ptr+i));        //(ptr+i)=&ptr[i]
	}
	for(i=0; i<n; i++)
	{
		printf("The number at %d location in the array is %d:\n", i,ptr[i]);
    }
    
    return 0;
    
}
