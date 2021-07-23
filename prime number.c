#include<stdio.h>

void prime(a){
	int i, count = 0;
	for(i = 2; i<=a; i++)
	{
		if(a%i == 0)
		{
			count++;
		}
		
	}
	if(count == 1){
		printf("Prime number\n");
	}
	else{
		printf("Not a prime number\n");
	}
}
int main()
{
	int a, i;
	
	printf("ENter the number to check prime or not\n");
	scanf("%d", &a);
	
	prime(a);
	
	
}
