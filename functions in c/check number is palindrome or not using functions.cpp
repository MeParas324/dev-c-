#include<stdio.h>
void num_palin(int);
 

int main()
{
	int n;
	int result;
	
	printf("enter the number\n");
	scanf("%d",&n);
	
	num_palin(n);
	
	
	
return 0;
}
void num_palin(int n)
{
	int temp=n;
	int rem,rev=0;
	
	while(temp>0)
	{
		rem=temp%10;
		temp=temp/10;
		rev=rev*10+rem;
	}
	if(rev==n)
	printf("number is palindrome");
	
	else 
	printf("number is not a palindrome");
}
