#include<stdio.h>


int main()
{
	int num,temp,rev=0;
	
	printf("enter the number\n");
	scanf("%d",&num);
	
	temp=num;
	
	while(num!=0)
	{
		rev=(rev*10)+(num%10);
		num/=10;
	}
	if(rev==temp)
	printf("%d is palindrome",temp);
	
	else
	printf("%d is not palindrome",temp);
	
	return 0;
}
