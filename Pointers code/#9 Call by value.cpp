#include<stdio.h>

void main()
{
	void add(int,int );
	
	int a=25,b=10;
	
	//Before function call
	printf("value of a and b is %d and %d\n",a,b);
	
	add(a,b);
	
	//After function call
//	printf("value of a and b is %d and %d\n",a,b);
	
}
void add(int m,int n)
{
	m=m+10;
	n=n+10;
	
	printf("value of m and n is %d and %d\n",m,n);
}
