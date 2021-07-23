#include<stdio.h>

int main()
{
	int num;
	
	printf("enter the number:\n");
	scanf("%d",&num);
	
	
	printf("pattern is .....\n");
	for( int i=1;i<=num;i++)
	  {
	  	for(int j=1;j<=i;j++)
	     printf("%d ",j);
	  
	  
	   	 printf("\n");
      }
 	  return 0;
}
