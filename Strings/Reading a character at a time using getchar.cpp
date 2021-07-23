#include<stdio.h>

int main()
{
	char name[100];
	int i;
	char *ptr=name;
	
	printf("enter the message\n");
	while((i=getchar())!='\n')
	{
		*ptr=i;
		 ptr++;
	}
	*ptr='\0';
	
	printf("Message is \n");
	printf("%s\n",name);
	
	return 0;
	
}
