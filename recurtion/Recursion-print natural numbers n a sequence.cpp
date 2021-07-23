#include<stdio.h>
int seq(int num)
{
	if(num==0)
	return 0;
	else
	  seq(num-1);
	  
	printf("%d ",num);
}

int main()
{
	int n;
	printf("enter the n term of natural numbers\n");
	scanf("%d",&n);
	seq(n);
}


