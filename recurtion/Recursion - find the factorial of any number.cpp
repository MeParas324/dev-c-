#include<stdio.h>

long int fact(int num)
{
	if(num==1)
	return 1;
	else 
	return num*fact(num-1);
	
}
int main()
{
	printf("the factorial is %d",fact(5));
	
	return 0;
	
}
