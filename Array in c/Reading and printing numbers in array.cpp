#include<stdio.h>
#define SIZE 10

int main()
{
	int a[SIZE],i;
	
	printf("enter two values\n");
	for(i=0;i<SIZE;i++)
	  scanf("%d",&a[i]);
	  
	//printing the values
	for(i=0;i<SIZE;i++)
	  printf("%d\n",a[i]);
	  
	return 0;
}
