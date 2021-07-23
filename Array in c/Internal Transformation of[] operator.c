#include<stdio.h>

int main()
{
	int a[3];
	int i;
	printf("enter three numbers\n");
	for( i=0;i<3;i++)
	scanf("%d",(a+i)); //a=&a[0] //(a+i)=&a[i]
	
	printf("Displaying 3 elements\n");
	for(i=0;i<3;i++)
	printf(" %lu %d ",(unsigned long)(a+i), *(a+i)); //*(a+i)=a[i]
	
	return 0;
}
