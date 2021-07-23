#include<stdio.h>

int main()
{
	int n;
	int count=0;
	
	printf("enter the number\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
			count++;
		n=n/10;
	
	}
	printf("%d digits",count);
	
	return 0;
	
}
