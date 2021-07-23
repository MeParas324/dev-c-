#include<stdio.h>
int num_palin(int);
 

int main()
{
	int n;
	int result;
	
	printf("enter the number\n");
	scanf("%d",&n);
	
	result=num_palin(n);
	
	if(result==1)
	printf("number is palindrome");
	
	else 
	printf("number is not a palindrome");
	
//return 0;

}
int num_palin(int n)
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
	return 1;
	
	else 
	return 0;
}
