#include<stdio.h>

int main()
{
	char name[100];
	
	printf("enter the message\n");  // "Hello welcome tp c strings\n" 
	fgets(name,100,stdin);
	printf("%s\n",name);
	
	printf("enter the message\n");  //"Hello welcome to c strings\n"
	scanf("%s",name);
	printf("%s",name);n
	return 0;
}
