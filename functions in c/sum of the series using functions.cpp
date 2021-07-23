//SUM OF THE SERIES ....1-1/3+1/5-1/7+.......UPTO 1/N

#include<stdio.h>
float sum_series(int N);


int main()
{
	int N;
	
	printf("enter the last term\n");
	scanf("%d",&N);
	
	sum_series(N);
	
		printf("sum is %6.2f",sum_series(N));
	
	return 0;
}
float sum_series(int N)
{
	float sum=0.0f;
	int sign=1;
	
	for(int i=1;i<=N;i=i+2)
	{
		sum=sum+1.0/i*sign;
		sign=sign*-1;
	}
  return(sum);
}
