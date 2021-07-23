#include<stdio.h>
void read_array(int *a,int n);
void large_small(int *, int );

int main()
{
	int a[20];
	int n;
	
	printf("Enter the number of elements into the array\n");
	scanf("%d", &n);
	
	read_array(a, n);
	
	large_small(a, n);
	
}
void read_array(int *a,int n)
{
	int i;
	printf("Enter the %d elements into the array\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",(a+i));
	}
}
void large_small(int *x, int n)
{
	int i;
	int large=x[0];
	int small=x[0];
	
	for(i=0; i<n; i++)
	{
		if(x[i]>large)
		large=x[i];
		
		if(x[i]<small)
		small=x[i];
	}
	printf("Largest number is %d and smallest no is %d", large, small);
}
