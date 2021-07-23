#include<stdio.h>
void perfect_number(int R1);


int main()
{
	int R1;
	int R2;
	
	printf("enter the rsnge between R1 and R2\n");
	scanf("%d%d",&R1,&R2);
	
	for(;R1<=R2;R1++)
	   perfect_number(R1);
	   
}
void perfect_number(int R1)
{
	int fact_sum=0;
	for(int i=1;i<=R1/2;i++)
	{
		if(R1%i==0)
		fact_sum=fact_sum+i;
	}
	if(fact_sum==R1)
	printf(" %d ",R1);
}
