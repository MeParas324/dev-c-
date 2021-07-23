#include<stdio.h>


int main()
{
	int num,c,r,sum=0,temp;
	
	printf("enter the number\n");
	scanf("%d",&num);
	
	temp=num;
	
	while(num!=0)
	{
		c=num%10;
		r=c*c*c;
		sum=sum+r;
		r=0;
		num=num/10;
	}
	if(sum==temp)
	printf("%d is armstrong",temp);
	else
	printf("%d is not armstrong",temp);
	
	return 0;
}
