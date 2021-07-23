#include<stdio.h>

int main(void)
{
	int a[4]={1,2,3,4};
	int b=5;
	
	printf("Content in b=%d\n", b);
	printf("Cntent in a =%d\n", a);
	printf("Cntent in a =%lu\n", (unsigned long)a);
	printf("Cntent in a =%lu\n", (unsigned long)&a[0]);
	
	return 0;
}

