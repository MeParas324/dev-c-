#include<stdio.h>

int main()
{
	int n,i=0;
	
	printf("how many numbers you want to enter\n");
	scanf("%d",&n);
	
	int a[n];
	
	printf("enter the number\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  
	printf("displaying the number\n");
	for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
	  
	return 0;

}
