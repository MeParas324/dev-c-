#include<stdio.h>
void swap(int *m,int *y);

int main()
{
	int a=10,b=20;
	
	printf("before call a=%d,b=%d\n",a,b);
	
	swap(&a,&b);
	
	printf("after call a=%d,b=%d\n",a,b);
	
}
void swap(int *m,int *n)
{
	int temp;
	
	temp=*m;
	*m=*n;
	*n=temp;
	
}
