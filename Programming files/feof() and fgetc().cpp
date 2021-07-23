#include<stdio.h>


int main()
{
	int c;
	
	printf("enter the data from the keyboard\n");
	
	while(1)
	{
		c=fgetc(stdin) ;
		
		if (feof(stdin))
		    break;
		    
		printf("%c",c);
	}
	
	return 0;
}
