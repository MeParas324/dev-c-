#include<stdio.h>
void show(int *x, int y[]);

int main()
{
	int a[3]={33,44,66};
	int b[5]={44,66,33,55,33};
	
	show(a,b);
	
	return 0;
}

void show(int *x, int y[])
{
	printf("printing the element of array a\n");
	for(int i=0;i<3;i++)
	{
		printf(" %d ", *(x + i), x[i]); // *(x+i)= x[i]
	}
	
	
	printf("\nprinting the element of array b\n");
	for(int i=0;i<5;i++)
	{
			printf(" %d ", *(y + i), y[i]);  // *(y+i)= y[i]
	}

}
