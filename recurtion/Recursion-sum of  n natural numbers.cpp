#include<stdio.h>
int sum(int num)
{
	if(num==1)
	return 1;
	else 
	return num+sum(num-1);
}



int  main ()
{
	int n;
	printf("enter the n term of natural numbers\n");
	scanf("%d",&n);
	
	printf("the sum is %d",sum(n));
	
	return 0;
}
