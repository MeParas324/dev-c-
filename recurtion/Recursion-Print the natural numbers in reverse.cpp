#include<stdio.h>
int rev(int num)
{
	if(num==0)
	return 0;
	else
	printf("%d ",num);
	rev(num-1);
}

int main()
{
	int n;
	printf("enter the n term of natural numbers\n");
	scanf("%d",&n);
	rev(n);
}

