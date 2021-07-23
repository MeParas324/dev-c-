#include<stdio.h>
void test(void);
int main()
{
	auto int i=10;
	
	printf("address of i in main is %p\n",(void*)(&i));
	for(int j=10;j<=12;j++)
	   printf("hello world\n");
	   
	//printf("value of j is %d\n,j);
	test();
	
	return 0;
}
void test(void)
{
	auto int i=100;
	printf("address of i in test is %p\n",(void*)(&i));
}
