#include<stdio.h>
void flyod_traingle(int n);

int main()
{
	int ROWS;
	
	printf("enter the number of rows\n");
	scanf("%d",&ROWS);
	
	flyod_traingle(ROWS);
	
}
void flyod_traingle(int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
	{
	 for(int j=1;j<=i;j++,k++)
	    printf(" %d ",k);
	    
	    printf("\n");
	}
}
