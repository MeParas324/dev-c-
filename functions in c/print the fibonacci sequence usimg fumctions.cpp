#include<stdio.h>
void fibo_range(int R1,int R2);


int main()
{
	int R1,R2;
	
	printf("enter the range to generate the fibonacci sequence\n");
	scanf("%d%d",&R1,&R2);
	
	fibo_range(R1,R2);
	
}
void fibo_range(int R1,int R2)
{
	int first=0,second=1,next=0;
	
	while(next<=R2)
	{
		if(next>=R1)
		printf(" %d ",next);
		
		first=second;
		second=next;
		next=first+second;
	}
}
