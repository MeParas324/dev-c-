#include<stdio.h>
#define MAX 50
void large_small_array(int *x ,int n);
void read_array(int *x,int n);

int main()
{
	int a[MAX];
	int n;
	
	printf("number of elements into the array\n");
	scanf("%d",&n);
	
	read_array(a,n);
	large_small_array(a,n);
	
}
void read_array(int *x,int n)
{
	printf("enter %d elements into the array\n",n);
	for(int i=0;i<n;i++)
	  scanf("%d",&x[i]);
}
void large_small_array(int *x,int n)
{
		int large=x[0];
		int small=x[0];
		
		for(int i=1;i<n;i++)
		{
			if(x[i]>large)
			large=x[i];
			
			if(x[i]<small)
			small=x[i];
		}
		printf("largest =%d and smallest =%d",large,small);
}
