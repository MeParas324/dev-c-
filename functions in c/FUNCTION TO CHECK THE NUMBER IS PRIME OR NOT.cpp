#include<stdio.h>
#include<math.h>
int prime_check(int N);

int main()
{
	int R1,R2;
	
	printf("enter the numbers in the range R1 and R2\n");
	scanf("%d%d",&R1,&R2);
	
	for(;R1<=R2;R1++)
	prime_check(R1);

    //return 0;	
}
int prime_check(int N)
{
	int div=2;
	
	while(div<=sqrt(N))
	{
		if(N%div==0)
		return 1;
		
		if(div==2)
		div++;
		else
		div=div+2;
	}
	if(N>1)
	printf(" %d ",N);
}
		
