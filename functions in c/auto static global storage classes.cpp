#include<stdio.h>
int i=10;
void gbl(void);
void test(void);

int main()
{
	for(int i=1;i<2;i++)
	printf("i in main is %d\n",i);
	
	test();
	test();
	
	i=90;
	gbl();
		
}
void test(void)
{
	static int i=0;
	i=i+10;
	printf("i in test is %d\n",i);
}
void gbl(void)
{
	printf("i in gbl id %d\n",i);
}
